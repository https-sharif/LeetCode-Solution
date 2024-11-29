typedef pair<int,pair<int,int>> node;

class Solution {
public:
    bool valid(int i, int j, int n, int m) {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    int minimumTime(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if(grid[0][1] > 1 && grid[1][0] > 1) return -1;

        vector<pair<int,int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));

        dist[0][0] = 0;
        priority_queue<node, vector<node>, greater<node>> pq;

        pq.push({0, {0, 0}});

        while(!pq.empty()) {
            auto [_, p] = pq.top();
            pq.pop();

            auto [x, y] = p;
            if(x == n - 1 && y == m - 1) return _;

            for(auto [dx, dy] : directions) {
                int nx = x + dx;
                int ny = y + dy;
                if(valid(nx, ny, n, m)) {
                    int mod = ((grid[nx][ny] - _) % 2) ^ 1;
                    int newDist = max(_ + 1, grid[nx][ny] + mod);
                    if(newDist < dist[nx][ny]) {
                        dist[nx][ny] = newDist;
                        pq.push({newDist, {nx, ny}});
                    }
                }
            }
        }
        
        return -1;
    }   
};
