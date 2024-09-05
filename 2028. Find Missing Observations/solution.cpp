class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int total = mean * (n + rolls.size());
        int sum = 0;
        for(auto r : rolls){
            sum += r;
        }
        total -= sum;
        if(total <= 0 || total < n || total > n * 6) return {};
        int avg = total / n;
        total -= avg * n;
        vector<int> ans(n,avg);
        int i = 0;
        while(total--){
            ans[i]++;
            i++;
        }
        return ans;
    }
};
