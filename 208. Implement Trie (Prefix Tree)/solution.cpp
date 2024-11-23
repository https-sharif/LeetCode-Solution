class Trie {
private:
    Trie* children[26];
    bool endWord;

public:
    Trie() {
        this->endWord = false;
        for(auto& child : this->children) child = nullptr;
    }
    
    void insert(string word) {
        auto current = this;
        for(auto& c : word) {
            int idx = c - 'a';
            if(current->children[idx] == nullptr) {
                current->children[idx] = new Trie();
            }
            current = current->children[idx];
        }
        current->endWord = true;
    }
    
    bool search(string word) {
        auto current = this;
        for(auto& c : word) {
            int idx = c - 'a';
            if(current->children[idx] == nullptr) return false;
            current = current->children[idx];
        }
        return current->endWord;
    }
    
    bool startsWith(string prefix) {
        auto current = this;
        for(auto& c : prefix) {
            int idx = c - 'a';
            if(current->children[idx] == nullptr) return false;
            current = current->children[idx];
        }
        return true;
    }
};
