class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int x = 0;
        for(auto g : gain){
            ans = max(x + g, ans);
            x += g;
        }
        return ans;
    }
};
