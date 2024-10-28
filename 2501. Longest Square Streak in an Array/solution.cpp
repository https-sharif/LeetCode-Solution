class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        map<int,int> mp;
        for(auto& num : nums) {
            mp[num]++;
        }
        int mx = 0;
        sort(nums.begin(), nums.end());
        for(auto& num : nums) {
            int len = 0;
            long long temp = num;
            while(temp * temp < 100000 && mp[temp * temp] != 0) {
                temp *= temp;
                len++;
                mp[temp] = 0;
            }
            mx = max(mx, len);
        }
        if(mx == 0) return -1;
        return mx + 1;
    }
};
