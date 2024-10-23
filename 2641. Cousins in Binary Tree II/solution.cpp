class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<int> sum(100005, 0);
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
                int x = 0;
                auto [node, level] = q.front();
                q.pop();
                if(node->left != nullptr) {
                    x += node->left->val;
                    q.push({node->left, level + 1});
                }
                if(node->right != nullptr) {
                    x += node->right->val;
                    q.push({node->right, level + 1});
                }
                sum[level] += x;
                node->val = x;
            }
        }
        update(root, sum, root->val, 0);

        root->val = 0;
        return root;
    }

    void update(TreeNode* root, vector<int>& sum, int val, int level) {
        if(root == nullptr) return;
        update(root->left, sum, root->val, level + 1);
        update(root->right, sum, root->val, level + 1);
        if(level == 0) return;
        int x = sum[level - 1] - val;
        root->val = x;
    }
};
