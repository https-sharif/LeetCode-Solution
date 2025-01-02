class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> store(words.size() + 1, 0);

        auto isVowel = [](char s) {
            if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') return true;
            return false;
        };

        for(int i = 0; i < words.size(); i++) {
            int n = words[i].size();
            
            if(isVowel(words[i][0]) && isVowel(words[i][n - 1])) {
                store[i + 1] = store[i] + 1;
            }
            else {
                store[i + 1] = store[i];
            }
        }

        vector<int> ans;
        for(auto q : queries) {
            int x = q[0];
            int y = q[1];
            ans.push_back(store[y + 1] - store[x]);
        }

        return ans;
    }
};
