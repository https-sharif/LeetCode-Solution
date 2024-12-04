class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0;
        int n = str1.size(), m = str2.size();

        while(i < n) {
            if(j == m) break;
            if(str2[j] == str1[i] || str2[j] == 'a' + ((str1[i] - 'a' + 1) % 26)) {
                j++;
            }
            i++;
        }

        if(j < m) return false;
        return true;
    }
};
