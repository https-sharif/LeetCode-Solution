class Solution {
public:
    string compressedString(string word) {
        string s = "";
        int i = 0;
        while(i < word.size()) {
            int j = i + 1;
            while(j < word.size() && word[j] == word[i]) {
                j++;
                if(j - i == 9) {
                    break;
                }
            }
            s += (j - i) + '0';
            s += word[i];
            i = j;
        }
        return s;
    }
};
