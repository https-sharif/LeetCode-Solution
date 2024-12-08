class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        int mx = 0, ans = 0;

        for(const auto& v : events) {
            int s = v[0], e = v[1], c = v[2];
    
            while(!pq.empty() && pq.top().first < s) {
                mx = max(mx, pq.top().second);
                pq.pop();
            }

            ans = max(ans, mx + c);
            pq.push({e, c});
        }


        return ans;
    }
};
