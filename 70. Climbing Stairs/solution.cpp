class Solution {
public:
    vector<int> memo;
    int dp(int n){
        if(n == 1 || n == 0){
            return 1;
        }
        if(memo[n] != -1){
            return memo[n];
        }
        if(n < 0){
            return 0;
        }
        memo[n] = dp(n-1) + dp(n-2);
        return memo[n];
    }

    int climbStairs(int n) {
        memo.resize(46, -1);
        return dp(n);
    }
};
