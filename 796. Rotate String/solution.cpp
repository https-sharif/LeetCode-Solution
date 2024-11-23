class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        int n = s.size();
        goal += goal;
        for(int i = 0; i < n; i++) {
            if(goal.substr(i, n) == s) return true;
        }

        return false;
    }
};
