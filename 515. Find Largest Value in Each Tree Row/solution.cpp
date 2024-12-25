class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root == nullptr) return ans;
        queue<pair<TreeNode*,int>> q;
        q.push({root, 0});

        while(!q.empty()) {
            auto [node, level] = q.front();
            q.pop();
            if(node == nullptr) continue;
            if(ans.size() < level + 1) {
                ans.push_back(node->val);
            }
            else {
                ans[level] = max(ans[level], node->val);
            }
            q.push({node->left, level + 1});
            q.push({node->right, level + 1});
        }

        return ans;
    }
};
