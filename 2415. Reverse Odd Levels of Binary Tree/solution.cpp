class Solution {
public:
    void swapNode(TreeNode* l, TreeNode* r, int level) {
        if(r == nullptr || l == nullptr) return;

        if(level % 2) {
            int temp = l->val;
            l->val = r->val;
            r->val = temp;
        }

        swapNode(l->left, r->right, level + 1);
        swapNode(r->left, l->right, level + 1);
    }

    TreeNode* reverseOddLevels(TreeNode* root) {
        swapNode(root->left, root->right, 1);

        return root;
    }
};
