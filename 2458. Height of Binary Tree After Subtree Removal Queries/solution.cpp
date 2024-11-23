class Solution {
public:
    vector<int> depth, levelArr, max1, max2;
    int findHeight(TreeNode* node, int level) {
        if(!node) return 0;
        levelArr[node->val] = level;
        depth[node->val] = 1 + max(findHeight(node->left, level + 1), findHeight(node->right, level + 1));

        if(depth[node->val] > max1[level]) {
            max2[level] = max1[level];
            max1[level] = depth[node->val];
        }
        else if(depth[node->val] > max2[level]) {
            max2[level] = depth[node->val];
        }

        return depth[node->val];
    }

    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        depth.resize(100001, 0);
        levelArr.resize(100001, 0);
        max1.resize(100001, 0);
        max2.resize(100001, 0);

        findHeight(root, 0);

        for(auto& q : queries) {
            int level = levelArr[q];
            q = (depth[q] == max1[level] ? max2[level] : max1[level]) + level - 1;
        }
        
        return queries;
    }
};
