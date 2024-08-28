class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int clr = image[sr][sc];
        if(clr == color){
            return image;
        }
        vector<pair<int,int>> directions = {{-1,0},{0,-1},{1,0},{0,1}};
        image[sr][sc] = color;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();
            for(auto [x,y] : directions){
                int newX = x+r, newY = y+c;
                if(newX >= 0 && newX < n && newY >= 0 && newY < m && image[newX][newY] == clr){
                    image[newX][newY] = color;
                    q.push({newX,newY});
                }
            }
        }
        return image;
    }
};
