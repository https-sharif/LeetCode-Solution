class Solution {
public:
    bool helper(vector<vector<int>> mat,int sum){
        vector<bool> seen(9,false);
        for(int i = 0; i < 3; i++){
            int x = 0;
            for (int j = 0; j < 3; j++){
                if(mat[i][j]<=9&&mat[i][j]>0&&!seen[mat[i][j]-1]){
                    x += mat[i][j];
                    seen[mat[i][j]-1] = true;
                }
                else{
                    return false;
                }
            }
            if(x != sum){
                return false;
            }
        }

        for(int i = 0; i < 3; i++){
            int x = 0;
            for (int j = 0; j < 3; j++){
                if(mat[j][i]<=9&&mat[j][i]>0){
                    x += mat[j][i];
                }
                else{
                    return false;
                }
            }
            if(x != sum){
                return false;
            }
        }

        int diag1 = mat[0][0] + mat[1][1] + mat[2][2];
        int diag2 = mat[0][2] + mat[1][1] + mat[2][0];
        if(diag1 != sum || diag2 != sum){
            return false;
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size() < 3 || grid[0].size() < 3){
            return 0;
        }
        vector<vector<int>> mat(3,vector<int>(3));
        int ans = 0;
        for(int i = 0; i < grid.size()-2;i++){
            for(int j = 0; j < grid[0].size()-2; j++){
                for(int k = 0; k < 3; k++){
                    for (int l = 0; l < 3; l++) {
                        mat[k][l] = grid[i + k][j + l];
                    }
                }
                if(helper(mat,grid[i][j]+grid[i][j+1]+grid[i][j+2])){
                    ans++;
                }
            }
        }
        return ans;
    }
};
