class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n = words1.size();
        int m = words2.size();

        vector<vector<int>> store(2, vector<int>(26, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < words2[i].size(); j++) {
                store[1][words2[i][j] - 'a']++;
            }
            for (int j = 0; j < 26; j++) {
                store[0][j] = max(store[0][j], store[1][j]);
                store[1][j] = 0;
            }
        }

        vector<string> ans;
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            for (int j = 0; j < words1[i].size(); j++) {
                freq[words1[i][j] - 'a']++;
            }
            
            bool pos = true;
            for(int j = 0; j < 26; j++) {
                if(store[0][j] > freq[j]) {
                    pos = false;
                    break;
                }
            }

            if(pos) {
                ans.push_back(words1[i]);
            }
        }

        return ans;
    }
};
