class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int m = points[0].size();
        vector<vector<long long>> dp(n,vector<long long>(m,0));
        for(int i = 0; i < m; i++){
            dp[0][i] = points[0][i];
        }
        for(int i = 1; i < n; i++){
            vector<long long> left(m,0);
            vector<long long> right(m,0);
            left[0] = dp[i-1][0];
            right[m-1] = dp[i-1][m-1];
            for(int k = 1; k < m; k++){
                left[k] = max(dp[i-1][k],left[k-1] - 1);
            }
            for(int k = m-2; k >= 0; k--){
                right[k] = max(dp[i-1][k], right[k+1] - 1);
            }
            for(int j = 0; j < m; j++){
                dp[i][j] = points[i][j] + max(left[j],right[j]);
            }
        }

        long long ans = 0;
        for(auto v : dp.back()){
            ans = max(ans, v);
        }
        return ans;
    }
};
