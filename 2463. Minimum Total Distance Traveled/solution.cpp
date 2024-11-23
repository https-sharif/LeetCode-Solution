class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());

        vector<int> newFactory;
        for(int i = 0; i < factory.size(); i++) {
            for(int j = 0; j < factory[i][1]; j++) {
                newFactory.push_back(factory[i][0]);
            }
        }
        int n = robot.size();
        int m = newFactory.size();

        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));

        for(int i = 0; i < n; i++) {
            dp[i][m] = 1e15;
        }
        dp[n][m] = 0;

        for(int i = n - 1; i >= 0; i--) {
            for(int j = m - 1; j >= 0; j--) {
                long long pick = abs(robot[i] - newFactory[j]) + dp[i + 1][j + 1];
                long long notPick = dp[i][j + 1];
                dp[i][j] = min(pick, notPick);
            }
        } 

        return dp[0][0];
    }
};
