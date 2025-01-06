class Solution {
public:
    string shiftingLetters(string& s, vector<vector<int>>& shifts) {
        int n = s.size();
        int sz = shifts.size();
        vector<int> apply(n + 1, 0);
        
        for(auto shift : shifts) {
            int start = shift[0];
            int end = shift[1];
            int direction = shift[2] ? 1 : -1;
            apply[start] += direction;
            apply[end + 1] -= direction;
        }

        partial_sum(apply.begin(), apply.end(), apply.begin());

        for(int i = 0; i < n; i++) {
            s[i] = ((s[i] - 'a') + (apply[i] % 26) + 26) % 26 + 'a';
        }

        return s;
    }
};
