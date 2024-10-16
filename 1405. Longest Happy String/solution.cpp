class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        if(a > 0) pq.push({a, 'a'});
        if(b > 0) pq.push({b, 'b'});
        if(c > 0) pq.push({c, 'c'});
        string s = "";
        int i = 0;
        while(!pq.empty()) {
            auto [x, y] = pq.top();
            pq.pop();
            int n = s.size();
            if(s.size() > 1 && s[n - 1] == s[n - 2] && s[n - 1] == y) {
                if(!pq.empty()){
                    auto [p, q] = pq.top();
                    pq.pop();
                    s += q;
                    p--;
                    if(p > 0) pq.push({p, q});
                }
                else{
                    break;
                }
                pq.push({x, y});
            }
            else{
                x--;
                s += y;
                if(x > 0) pq.push({x, y});
            }
        }
        return s;
    }
};
