class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> res;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int n = q.size();
            long long sum = 0;

            while(n--) {
                TreeNode* node = q.front();
                q.pop();

                sum += node->val;
                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
            }

            res.push_back(sum);
        }

        sort(res.begin(), res.end() , [](long long& a, long long& b){
            return a > b;
        });

        if(k > res.size()) return -1;

        return res[k - 1];
    }
};
