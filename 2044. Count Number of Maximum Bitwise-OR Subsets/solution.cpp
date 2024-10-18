class Solution {
public:
    int cnt = 0;
    int ans = 0;

    void findAns(vector<int>& nums, int idx, int curr){
        if(curr == ans) cnt++; 
        if(idx >= nums.size()) return;
        for(int i = idx; i < nums.size(); i++) {
            findAns(nums, i + 1, curr | nums[i]);
        }
    }

    int countMaxOrSubsets(vector<int>& nums) {  
        for(auto num : nums){
            ans |= num;
        }

        findAns(nums, 0, 0);
        return cnt;
    }   
};
