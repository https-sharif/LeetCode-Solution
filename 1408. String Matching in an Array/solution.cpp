class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), [](string& a, string& b) {
            return a.size() < b.size();
        });
        int n = words.size();
        vector<string> ans;
        for(int i = 0; i < n; i++) {
            bool found = false;
            int len = words[i].size();
            for(int j = i + 1; j < n; j++) {
                for(int k = 0; k <= words[j].size() - len; k++) {
                    string t = words[j].substr(k, len);
                    if(t == words[i]) {
                        ans.push_back(words[i]);
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
        }

        return ans;
    }
};
