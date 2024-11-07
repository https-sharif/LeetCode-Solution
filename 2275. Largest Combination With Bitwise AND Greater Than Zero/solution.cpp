class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        map<int,int> mp;
        for(int i = 0; i < candidates.size(); i++) {
            int bit = 1;
            while(candidates[i]) {
                if(candidates[i] & 1) mp[bit]++;
                bit <<= 1;
                candidates[i] >>= 1;
            }
        }
        int ans = 0;
        for(auto& [x, y] : mp) ans = max(ans, y);
        return ans;
    }
};
