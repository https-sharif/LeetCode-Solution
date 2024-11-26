class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        map<int, set<int>> mp;
        if(n == 1) return 0;
        for(auto& v : edges) {
            int a = v[0];
            int b = v[1];

            mp[a].insert(b);
            mp[b].insert(-1);
        }

        int ans = -1;

        for(auto& [x, y] : mp) {
            if(y.find(-1) == y.end()) {
                if(ans == -1) {
                    ans = x;
                }
                else{
                    return -1;
                }
            }
            n--;
        }

        return (n == 0) ? ans : -1;
    }
};
