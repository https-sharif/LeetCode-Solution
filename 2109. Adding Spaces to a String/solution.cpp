class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        int m = spaces.size();
        int idx = 0;

        string t = "";
        for(int i = 0; i < n; i++) {
            if(idx < m && i == spaces[idx]) {
                t += ' ';
                idx++;
            }
            t += s[i];
        }

        return t;
    }
};
