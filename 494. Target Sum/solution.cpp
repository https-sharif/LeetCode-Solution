class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        long long sum = accumulate(nums.begin(), nums.end(), 0);
        if ((sum - target) % 2 != 0 || sum < target) return 0;
        
        int diff = (sum - target) / 2;
        
        vector<int> dp(diff + 1, 0);
        dp[0] = 1;
        
        for (int num : nums) {
            for (int j = diff; j >= num; --j) {
                dp[j] += dp[j - num];
            }
        }
        
        return dp[diff];
    }
};
