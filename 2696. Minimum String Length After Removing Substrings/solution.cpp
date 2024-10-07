class Solution {
public:
    int minLength(string s) {
        int n = s.size();
        string t = "";

        for(int i = 0; i < n; i ++) {
            if(t.size() == 0){
                t += s[i];
                continue;
            }
            if(s[i] == 'B' && t.back() == 'A' || s[i] == 'D' && t.back() == 'C') {
                t.pop_back();
            }
            else{
                t.push_back(s[i]);
            }
        }
        return t.size();
    }
};
