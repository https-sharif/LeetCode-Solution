class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        int sum = 0;
        vector<int> ans(n, 0);
        if (k == 0) {
            return ans;
        }
        if (k < 0) {
            for (int i = n - 2, j = 0; j < n ; i--, j++) {
                sum += code[i];
            }
            ans[n - 1] = sum;
            sum -= code[n - 2];
            for (int i = n - 2; i >= 0; i--) {
                sum += code[(i + n - k) % n];
                ans[i] = sum;
                sum -= code[(i - 1 + n) % n];
            }
        }
        else{
            for (int i = 1; i <= k; i++) {
                sum += code[i];
            }
            ans[0] = sum;
            sum -= code[1];
            for (int i = 1; i < n; i++) {
                sum += code[(i + k) % n];
                ans[i] = sum;
                sum -= code[(i + 1) % n];
            }
        }
        return ans;
    }
};
