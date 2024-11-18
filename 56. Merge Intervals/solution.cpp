class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0];
        int curr = intervals[0][1];

        vector<vector<int>> ans;
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i][0] <= curr) {
                curr = max(curr, intervals[i][1]);
            }
            else{
                ans.push_back({start, curr});
                start = intervals[i][0];
                curr = intervals[i][1];
            }
        }
        ans.push_back({start, curr});

        return ans;
    }
};
