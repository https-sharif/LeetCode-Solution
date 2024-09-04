class Solution {
public:
    vector<pair<int,int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<long long> st;
        for(auto& o : obstacles){
            st.insert(static_cast<long>(o[0]) * 100000 + o[1]);
        }
        int x = 0, y = 0;
        int d = 0;
        int res = 0;
        for(auto& c : commands){
            if(c == -2){
                d = (d + 3) % 4;
            }
            else if(c == -1){
                d = (d + 1) % 4;
            }
            else{
                while(c--){
                    auto [newX, newY] = dir[d];
                    newX += x;
                    newY += y;
                    if(st.find(static_cast<long>(newX) * 100000 + newY) == st.end()){
                        x = newX;
                        y = newY;
                    }
                }
            }
            res = max(res, (x * x) + (y * y));
        }
        return res;
    }
};
