class Solution {
public:
    int ans = 0;
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> parent(n*m);
        vector<int> rank(n*m, 0);

        for(int i = 0; i < n * m; i++){
            parent[i] = i;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1') ans++;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1'){
                    if(i + 1 < n && grid[i+1][j] == '1'){
                        unionSet(formula(i,j,m),formula(i+1,j,m),rank,parent);
                    }
                    if(j + 1 < m && grid[i][j+1] == '1'){
                        unionSet(formula(i,j,m),formula(i,j+1,m),rank,parent);
                    }
                }
            }
        }

        return ans;
    }

    int formula(int x, int y, int m){
        return x * m + y;
    }

    int find(int x, vector<int>& parent){
        if(parent[x] != x){
            parent[x] = find(parent[x],parent);
        }
        return parent[x];
    }

    void unionSet(int x, int y, vector<int>& rank, vector<int>& parent){
        int rootX = find(x,parent);
        int rootY = find(y,parent);

        if(rootX != rootY){
            if(rank[rootX] > rank[rootY]){
                parent[rootY] = rootX;
            }
            else if(rank[rootX] < rank[rootY]){
                parent[rootX] = rootY;
            }
            else{
                parent[rootY] = rootX;
                rank[rootX]++;
            }
            ans--;
        }
    }
};
