class Solution {
public:
    int deadOrAlive(int val, int cnt) {
        if(val == 1){
            if(cnt < 2 || cnt > 3) {
                return 3;
            }
            else{
                return val;
            }
        }
        else if(cnt == 3) return 2;
        return val;
    }

    int findNextState(int val) {
        if(val == 0 || val == 3) return 0;
        else return 1;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int cnt = 0;
                if(i > 0 && j > 0) cnt += board[i - 1][j - 1] & 1;
                if(i > 0) cnt += board[i - 1][j] & 1;
                if(i > 0 && j < m - 1) cnt += board[i - 1][j + 1] & 1;
                if(j > 0) cnt += board[i][j - 1] & 1;
                if(j < m - 1) cnt += board[i][j + 1] & 1;
                if(i < n - 1 && j > 0) cnt += board[i + 1][j - 1] & 1;
                if(i < n - 1) cnt += board[i + 1][j] & 1;
                if(i < n - 1 && j < m - 1) cnt += board[i + 1][j + 1] & 1;

                board[i][j] = deadOrAlive(board[i][j], cnt);

                cout << cnt << " ";
            }
            cout << endl;
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                board[i][j] = findNextState(board[i][j]);
            }
        }
    }
};
