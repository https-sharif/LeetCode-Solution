class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = sentence.size();
        int m = searchWord.size();

        int word = 1;
        
        int i = 0, j = 0;
        bool go = true;
        while(i < n) {
            if(sentence[i] == ' ') {
                j = 0;
                go = true;
                word++;
            }
            else if(go && sentence[i] == searchWord[j]) {
                j++;
                if(j == m) {
                    return word;
                }
            }
            else {
                j = 0;
                go = false;
            }
            i++;
        }

        return -1;
    }
};
