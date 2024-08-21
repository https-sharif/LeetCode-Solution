class Solution {
public:
    int strangePrinter(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return findAns(0, n - 1, s, dp);
    }

    int findAns(int i, int j, const string& s, vector<vector<int>>& dp) {
        if (i > j) {
            return 0;
        }

        if (dp[i][j] != -1) return dp[i][j];

        char l = s[i];
        int ans = 1 + findAns(i + 1, j, s, dp);
        for (int k = i + 1; k <= j; k++) {
            if (s[k] == l) {
                int better = findAns(i, k - 1, s, dp) + findAns(k + 1, j, s, dp);
                ans = min(ans, better);
            }
        }
        return dp[i][j] = ans;
    }
};
