class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int len = words[i].size();
            for(int j = i + 1; j < n; j++) {
                bool pos = true;
                for(int k = 0; k < len; k++) {
                    if(words[i][k] != words[j][k]) {
                        pos = false;
                        break;
                    }
                }
                if(!pos) continue;
                int end = words[j].size() - len;
                for(int k = 0; k < len; k++) {
                    if(words[i][k] != words[j][k + end]) {
                        pos = false;
                        break;
                    }
                }

                if(pos) ans++;
            }
        }
        return ans;
    }
};
