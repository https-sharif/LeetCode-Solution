class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        vector<int> freq(26, 0);

        for(int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        int ans = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] == 0) continue;
            ans += 2 - (freq[i] & 1);
        }

        return ans;
    }
};
