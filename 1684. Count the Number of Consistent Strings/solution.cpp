class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> freq(26, 0);
        for(auto c : allowed) freq[c-'a'] = 1;
        int count = 0;
        for(auto word : words){
            for(auto c : word) {
                if(freq[c-'a'] == 0){
                    count--;
                    break;
                }
            }
            count++;
        }
        return count;
    }
};
