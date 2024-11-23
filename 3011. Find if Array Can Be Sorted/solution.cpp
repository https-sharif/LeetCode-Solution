class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int mx = nums[0];
        int prev = INT_MIN;
        int mn = nums[0];
        int cnt = bitset<32>(nums[0]).count();

        for(int i = 1; i < nums.size(); i++) {
            int temp = nums[i];
            int currCnt = bitset<32>(nums[i]).count();

            if(currCnt != cnt) {
                if(mn < prev) return false;

                prev = mx;
                mn = nums[i];
                mx = nums[i];
                cnt = currCnt;
            }
            else{
                mn = min(mn, nums[i]);
                mx = max(mx, nums[i]);
            }
        }

        return mn > prev;
    }
};
