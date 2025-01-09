class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        int n = pref.size();
        for(auto& word : words) {
            if(word.size() < n) continue;
            bool isPrefix = true;
            for(int i = 0; i < n; i++) {
                if(word[i] != pref[i]) {
                    isPrefix = false;
                    break;
                }
            }
            if(isPrefix) ans++;
        }

        return ans;
    }
};
