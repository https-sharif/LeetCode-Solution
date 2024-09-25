class Trie {
    public:
        Trie* child[26] = {};
        int visited = 0;
};
class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie trie;
        for(auto& word : words){
            auto t = &trie;
            for(auto& c : word){
                if(!t->child[c - 'a']) t->child[c - 'a'] = new Trie();
                t = t->child[c - 'a'];
                t->visited++;
            }
        }
        vector<int> ans(words.size(),0);

        for(int i = 0; i < words.size(); i++){
            auto t = &trie;
            int x = 0;
            for(auto& c : words[i]){
                t = t->child[c - 'a'];
                x += t->visited;
            }
            ans[i] = x;
        }

        return ans;
    }
};
