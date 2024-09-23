class Solution {
public:
    set<string> st;
    vector<int> memo;
    int findMin(string& s, int idx){
        if(idx >= s.size()) return 0;
        if(memo[idx] != -1) return memo[idx];

        int m = findMin(s, idx + 1) + 1;
        for(int i = 1; idx + i <= s.size(); i++){
            string t = s.substr(idx, i);
            if(st.find(t) != st.end()) m = min(m,findMin(s,idx + i));
        }
        memo[idx] = m;
        return m;
    }

    int minExtraChar(string s, vector<string>& dictionary) {
        memo.resize(s.size(), -1);
        for(auto& d : dictionary) st.insert(d);
        return findMin(s,0);
    }
};
