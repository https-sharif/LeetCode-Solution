class Solution {
public:
    vector<vector<char>> adj = {{1, 3}, {0, 2, 4}, {1, 5},
                                {0, 4}, {1, 3, 5}, {2, 4}};

    int slidingPuzzle(vector<vector<int>>& board) {
        string target = "123450";
        string curr(6, '-');

        char pos = -1;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                int idx = i * 3 + j;
                curr[idx] = board[i][j] + '0';
                if (board[i][j] == 0)
                    pos = idx;
            }
        }

        if (curr == target)
            return 0;

        unordered_set<string> visited;
        queue<pair<string, char>> q;
        q.push({curr, pos});

        for (int m = 0; !q.empty(); m++) {
            int qs = q.size();
            for (int i = 0; i < qs; i++) {
                auto [x, p] = q.front();
                q.pop();

                if (x == target)
                    return m;

                for (auto c : adj[p]) {
                    string s = x;
                    swap(s[p], s[c]);

                    if(visited.find(s) != visited.end()) continue;
                    
                    visited.insert(s);
                    q.push({s, c});
                }
            }
        }

        return -1;
    }
};
