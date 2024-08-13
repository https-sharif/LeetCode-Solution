class Solution {
public:
    vector<vector<int>> ans;
    int t;
    void dp(vector<int> &candidates, int i, int sum,vector<int> &a){
        if(sum == t){
            ans.push_back(a);
            return;
        }
        if(sum > t || i >= candidates.size()){
            return;
        }
        for (int j = i; j < candidates.size(); ++j) {
            if (j > i && candidates[j] == candidates[j - 1]) {
                continue;
            }
            if (sum + candidates[j] > t) {
                break;
            }
            a.push_back(candidates[j]);
            dp(candidates, j + 1, sum + candidates[j], a);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        t = target;
        vector<int> a;
        sort(candidates.begin(),candidates.end());
        dp(candidates,0,0,a);
        return ans;
    }
};
