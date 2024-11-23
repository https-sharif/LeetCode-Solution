class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        multiset<int> endTime;
        sort(intervals.begin(), intervals.end());

        for(auto& interval : intervals) {
            int start = interval[0];
            int end = interval[1];
            multiset<int>::iterator it = endTime.lower_bound(start);

            if(it != endTime.begin()){
                it--;
                endTime.erase(it);
            }
            endTime.insert(end);
        }

        return endTime.size();
    }
};
