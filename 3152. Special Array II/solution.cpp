class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> pre(nums.size());
        pre[0] = 0;
        for(int i = 1; i < nums.size(); i++) {
            pre[i] += pre[i - 1] + (nums[i] % 2 == nums[i - 1] % 2);
        }

        vector<bool> ans;

        for(auto& q : queries) {
            int l = q[0], r = q[1];

            if(pre[l] != pre[r]) {
                ans.push_back(false);
            }
            else {
                ans.push_back(true);
            }
        }

        return ans;
    }
};
