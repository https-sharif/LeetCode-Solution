class Solution {
public:
    void bfs(TreeNode* head, int level, vector<vector<int>>& values) {
        if(head == nullptr) return;
        if(values.size() < level + 1) {
            values.push_back({head->val});
        }
        else {
            values[level].push_back(head->val);
        }

        bfs(head->left, level + 1, values);
        bfs(head->right, level + 1, values);
    }

    int minimumOperations(TreeNode* root) {
        vector<vector<int>> values;

        bfs(root, 0, values);

        int ans = 0;
        for(auto v : values) {
            vector<int> idx(v.size());
            iota(idx.begin(), idx.end(), 0);

            sort(idx.begin(), idx.end(), [&](int i, int j) {
                return v[i] < v[j];
            });

            int cnt = 0;
            for(int i = 0; i < v.size(); ) {
                int j = idx[i];

                if(j == i) {
                    i++;
                }
                else {
                    cnt++;
                    swap(idx[i], idx[j]);
                }
            }

            ans += cnt;
        }
        return ans;
    }
};
