class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0, open = 0;
        for(auto &c : s) {
            if(c == '(') open++;
            else if(open) open--;
            else ans++;
        }
        return open + ans;
    }
};
