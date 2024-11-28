typedef pair<int, pair<int,int>> node;

class Solution {
public:
    vector<pair<int,int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    bool valid(int i, int j, int n, int m) {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    int minimumObstacles(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> cost(n, vector<int>(m, INT_MAX));
        cost[0][0] = 0;
        priority_queue<node, vector<node>, greater<node>> pq;
        int sum = 0;
        pq.push({grid[0][0], {0, 0}});
        while(!pq.empty()) {
            auto [_, p] = pq.top();
            pq.pop();
            auto [x, y] = p;
            for(auto [dx, dy] : directions) {
                int nx = x + dx, ny = y + dy;
                if(valid(nx, ny, n, m)) {
                    int newCost = cost[x][y] + grid[nx][ny];
                    if(newCost < cost[nx][ny]) {
                        cost[nx][ny] = newCost;
                        pq.push({grid[nx][ny], {nx, ny}});
                    }
                }
            }
        }

        return cost[n - 1][m - 1];
    }
};
