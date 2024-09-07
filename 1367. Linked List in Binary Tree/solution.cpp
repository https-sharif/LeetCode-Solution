class Solution {
public:
    bool find(ListNode* head, TreeNode* root){
        if(head == nullptr) return true;
        if(root == nullptr) return false;
        return head->val == root->val && (find(head->next, root->left) || find(head->next, root->right));
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root == nullptr) return false;
        return find(head,root) || isSubPath(head, root->left) || isSubPath(head,root->right);
    }
};
