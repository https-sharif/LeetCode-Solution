class Solution {
public:
    int n, ans;
    vector<int> s;
    int regionsBySlashes(vector<string>& grid) {
        n = grid.size();
        ans = n * n * 4;
        for (int i = 0; i < ans; i++) {
            s.push_back(i);
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i > 0) unionSet(formula(i,j,0),formula(i-1,j,2));
                if(j > 0) unionSet(formula(i,j,3),formula(i,j-1,1));
                if(grid[i][j] == '/'){
                    unionSet(formula(i,j,2),formula(i,j,1));
                    unionSet(formula(i,j,0),formula(i,j,3));
                }
                else if(grid[i][j] == '\\'){
                    unionSet(formula(i,j,0),formula(i,j,1));
                    unionSet(formula(i,j,2),formula(i,j,3));
                }
                else{
                    unionSet(formula(i,j,0),formula(i,j,1));
                    unionSet(formula(i,j,2),formula(i,j,3));
                    unionSet(formula(i,j,0),formula(i,j,2));
                }
            }
        }
        return ans;
    }

    int find(int i) { return (s[i] == i) ? i : s[i] = find(s[i]); }

    void unionSet(int i, int j) {
        i = find(i);
        j = find(j);
        if (i != j) {
            s[i] = j;
            ans--;
        }
    }

    int formula(int i, int j, int k) { return (i * n + j) * 4 + k; }
};
