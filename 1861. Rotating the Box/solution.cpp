class Solution {
public:

    int findNext(int r, int c, vector<vector<char>>& box) {
        while(r >= 0 && box[c][r] != '.') {
            r--;
        }
        return r;
    }

    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int n = box.size();
        int m = box[0].size();

        for(int i = 0; i < n; i++) {
            int r = m - 1;

            r = findNext(r, i, box);

            int l = r - 1;
            while(l >= 0) {
                if(box[i][l] == '*') {
                    r = findNext(l - 1, i, box);
                    r = l - 1;
                }
                else if(box[i][l] == '#') {
                    swap(box[i][l], box[i][r]);
                    r--;
                }
                l--;
            }
        }

        vector<vector<char>> ans(m, vector<char>(n, '.'));


        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ans[i][j] = box[n - 1 - j][i];
            }
        }

        return ans;
    }
};
