    class Solution {
    public:
        int minSubarray(vector<int>& nums, int p) {
            int n = nums.size();
            int sum = 0;
            for (int i = 0; i < n; i ++) {
                nums[i] %= p;
                sum = (sum + nums[i]) % p;
                if(i != 0) nums[i] = sum;
            }

            if(sum % p == 0) return 0;
            sum %= p;
            map<int,int> mp;

            int mn = INT_MAX;
            mp[0] = -1;
            for(int i = 0; i < n; i++) {
                int target = (nums[i] - sum + p) % p;
                if(mp.find(target) != mp.end()) {
                    mn = min(mn, i - mp[target]);
                }
                mp[nums[i] % p] = i;
            }

            return mn == n ? -1 : mn;
        }
    };
