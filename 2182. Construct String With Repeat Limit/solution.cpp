class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        map<char, int> mp;
        priority_queue<pair<char,int>> pq;

        for(auto c : s) {
            mp[c]++;
        }

        for(auto& [x, y] : mp) {
            pq.push({x, y});
        }

        string ans = "";
        while(!pq.empty()) {
            auto [x, y] = pq.top();
            pq.pop();
            int j = 0;

            for(int i = ans.size() - 1; i >= 0; i--) {
                if(ans[i] == x) j++;
                else break;
            }

            for(int i = 0; i < y; i++, j++) {
                if(j == repeatLimit) {
                    if(pq.empty()) return ans;
                    j = 0;
                    auto [nx, ny] = pq.top();
                    pq.pop();
                    ny--;
                    ans += nx;
                    if(ny > 0) pq.push({nx, ny});
                }
                ans += x;
            }
        }

        return ans;
    }
};
