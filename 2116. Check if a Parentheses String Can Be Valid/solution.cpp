class Solution {
public:
    bool canBeValid(string s, string locked) {
        int open = 0, close = 0;
        int n = s.size();
        if(n % 2) return false;

        for(int i = 0; i < n; i++) {
            bool a = s[i] == '(';
            bool b = locked[i] == '0';

            open += (!a | b) ? -1 : 1;
            close += (a | b) ? 1 : -1;

            if(close < 0) return false;
            open = max(open, 0);
        }

        return open == 0;
    }
};
