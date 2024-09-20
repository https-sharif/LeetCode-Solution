class Solution {
public:
    string shortestPalindrome(string s) {
        string t = s + '-' + string(s.rbegin(),s.rend());

        int n = t.size();
        vector<int> lps(n,0);
        int i = 1;
        while(i < n){
            int j = lps[i - 1];
            while(j > 0 && t[i] != t[j]){
                j = lps[j - 1];
            }
            lps[i] = (j += t[i] == t[j]);
            i++;
        }
        
        int longest = lps[n-1];
        t = string(s.rbegin(),s.rend()).substr(0,s.size() - longest);
        return t + s;
    }
};
