class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mn = arrays[0][0];
        int mx = arrays[0][arrays[0].size()-1];
        int d = 0;
        for(int i = 1; i < arrays.size(); i++){
            d = max(d,abs(arrays[i][0] - mx));
            d = max(d,abs(arrays[i][arrays[i].size()-1] - mn));
            mn = min(mn, arrays[i][0]);
            mx = max(mx, arrays[i][arrays[i].size()-1]);
        }
        return d;
    }
};
