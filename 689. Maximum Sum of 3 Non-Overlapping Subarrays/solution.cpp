class Solution {
public:
    int dp(vector<int>& sum, int k, int idx, int rem, vector<vector<int>>& memo) {
        if(rem == 0) return 0;
        if(idx >= sum.size()) return rem > 0 ? INT_MIN : 0;

        if(memo[idx][rem] != -1) return memo[idx][rem];

        int c = sum[idx] + dp(sum, k, idx + k, rem - 1, memo);
        int s = dp(sum, k, idx + 1, rem, memo);

        memo[idx][rem] = max(c, s);
        return memo[idx][rem];
    }

    void dfs(vector<int>& sum, int k, int idx, int rem, vector<vector<int>>& memo, vector<int>& indices) {
        if(rem == 0) return;
        if(idx >= sum.size()) return;

        int c = sum[idx] + dp(sum, k, idx + k, rem - 1, memo);
        int s = dp(sum, k, idx + 1, rem, memo);

        if(c >= s) {
            indices.push_back(idx);
            dfs(sum, k, idx + k, rem - 1, memo, indices);
        }
        else {
            dfs(sum, k, idx + 1, rem, memo, indices);
        }
    }


    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size() - k + 1;

        vector<int> sum(n);

        int windowSum = 0;
        for(int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        sum[0] = windowSum;
        for(int i = k; i < nums.size(); i++) {
            windowSum += nums[i];
            windowSum -= nums[i - k];

            sum[i - k + 1] = windowSum;
        }

        vector<vector<int>> memo(n, vector<int> (4, -1));
        vector<int> indices;

        dp(sum, k, 0, 3, memo);
        dfs(sum, k, 0, 3, memo, indices);

        return indices;
    }
};
