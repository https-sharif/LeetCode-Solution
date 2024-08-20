class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<int> suffix(n+1,0);
        for(int i = n-1; i >=0; i--){
            suffix[i] = suffix[i+1] + piles[i];
        }

        vector<vector<int>> memo(n+1,vector<int>(n+1,0));

        for(int i = 0; i < n; i++){
            memo[i][n] = suffix[i];
        }

        for(int i = n-1; i >= 0; i--){
            for(int j = n-1; j >= 0; j--){
                for(int X = 1; X <= 2*j && i + X <= n; X++){
                    memo[i][j] = max(memo[i][j],suffix[i] - memo[i + X][max(j,X)]);
                }
            }
        }
        return memo[0][1];
    }
};
