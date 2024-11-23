class Solution {
public:
    
    int dp(int idx, vector<int>& cost, vector<int>& memo){
        if(idx >= cost.size()) return 0;
        if(memo[idx] != -1) return memo[idx];
        int first = dp(idx + 1, cost, memo);
        int second = dp(idx + 2, cost, memo);
        memo[idx] = min(first, second) + cost[idx];
        return memo[idx];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> memo(cost.size(), -1);

        return min(dp(0, cost, memo), dp(1,cost,memo));
    }
};
