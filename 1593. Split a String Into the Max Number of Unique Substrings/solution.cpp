class Solution {
public:
    int btrack(string& s, set<string> st, int idx) {
        if(idx == s.size()) return 0;

        int cnt = 0;
        for(int i = idx; i < s.size(); i++) {
            string temp = s.substr(idx, i - idx + 1);
            if(st.find(temp) == st.end()) {
                st.insert(temp);
                cnt = max(cnt, btrack(s, st, i + 1) + 1);
                st.erase(temp);
            }
        }
        return cnt;
    }

    int maxUniqueSplit(string s) {
        set<string> st;
        return btrack(s, st, 0);
    }
};
