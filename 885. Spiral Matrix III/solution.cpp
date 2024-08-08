class Solution {
public:
    vector<pair<int,int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int r, int c) {
        int dist = 1;
        int dind = 0;
        vector<vector<int>> ans;
        int visited = rows * cols;
        while(visited != 0){
            for (int i = 0; i < dist; ++i) {
                if(r >= 0 && r < rows && c >= 0 && c < cols){
                    visited--;
                    ans.push_back({r,c});
                }
                r += dir[dind].first;
                c += dir[dind].second;
            }
            dind = (dind+1)%4;
            for (int i = 0; i < dist; ++i) {
                if(r >= 0 && r < rows && c >= 0 && c < cols){
                    visited--;
                    ans.push_back({r,c});
                }
                r += dir[dind].first;
                c += dir[dind].second;
            }
            dind = (dind+1)%4;
            dist++;
        }
        return ans;
    }
};
