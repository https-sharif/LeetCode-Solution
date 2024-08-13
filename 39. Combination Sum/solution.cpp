class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int> &c,int k, int t, vector<int> &a){
        if(t == 0){
            ans.push_back(a);
            return;
        }
        if(k >= c.size() || t<0){
            return;
        }
        for(int i = k;i < c.size(); i++){
            a.push_back(c[i]);
            backtrack(c,i,t-c[i],a);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> a;
        backtrack(candidates,0,target,a);
        return ans;
    }
};
