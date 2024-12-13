typedef pair<int,int> element;
class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        priority_queue<element, vector<element>, greater<element>> pq;
        vector<int> mp(n + 2, 0);

        for(int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }

        auto inside = [n](int i) {
            return (i >= 0 && i < n);
        };

        long long ans = 0;

        while(!pq.empty()) {
            auto [x, y] = pq.top();
            pq.pop();
            if(mp[y] == 1) continue;
            mp[y] = 1;

            ans += x;

            if(inside(y - 1)) mp[y - 1] = 1;
            if(inside(y + 1)) mp[y + 1] = 1;
        }

        return ans;
    }
};
