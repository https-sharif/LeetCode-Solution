class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> s1,s2;

        sentence1 += ' ';
        sentence2 += ' ';

        int n = sentence1.size(), m = sentence2.size();
        string s = "";
        for(int i = 0; i < n; i++){
            if(sentence1[i] == ' '){
                s1.push_back(s);
                s = "";
            }
            else{
                s += sentence1[i];
            }
        }
        s = "";
        for(int i = 0; i < m; i++){
            if(sentence2[i] == ' '){
                s2.push_back(s);
                s = "";
            }
            else{
                s += sentence2[i];
            }
        }


        int s1_size = s1.size() - 1, s2_size = s2.size() - 1;

        int c1 = 0, c2 = 0;
        while(c1 <= s1_size && c2 <= s2_size){
            if(s1[c1] == s2[c2]){
                c1++;
                c2++;
            }
            else if(s1[s1_size] == s2[s2_size]){
                s1_size--;
                s2_size--;
            }
            else break;
        }

        return c1 == s1_size + 1 || c2 == s2_size + 1;
    }
};
