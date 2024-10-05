class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if(n > m) return false;

        vector<int> freq(26,0), tempFreq(26,0);

        for(int i = 0; i < n; i++){
            freq[s1[i] - 'a']++;
            tempFreq[s2[i] - 'a']++;
        }

        for(int i = n; i < m; i++){
            if(freq == tempFreq) return true;
            tempFreq[s2[i] - 'a']++;
            tempFreq[s2[i - n] - 'a']--;
        }

        return (freq == tempFreq);
    }
};
