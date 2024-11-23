class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        int currMax = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i][0], i, 0});
            currMax = max(currMax, nums[i][0]);
        }

        vector<int> ans = {0, INT_MAX};

        while (!pq.empty()) {
            vector<int> x = pq.top();
            pq.pop();

            int currVal = x[0];
            int listIdx = x[1];
            int elemIdx = x[2];

            if (currMax - currVal < ans[1] - ans[0] ||
                currMax - currVal == ans[1] - ans[0] && currVal < ans[0]) {
                ans[0] = currVal;
                ans[1] = currMax;
            }

            if (elemIdx + 1 < nums[listIdx].size()) {
                pq.push({nums[listIdx][elemIdx + 1], listIdx, elemIdx + 1});
                currMax = max(currMax, nums[listIdx][elemIdx + 1]);
            } else {
                break;
            }
        }
        return ans;
    }
};
