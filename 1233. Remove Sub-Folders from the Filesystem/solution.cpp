class Trie {
private:
    map<string, Trie*> children;
    bool folderEnd;
public: 
    Trie() {
        folderEnd = false;
    }

    void insertFolder(string s) {
        auto current = this;
        string folderName = "/";
        for(int i = 1; i < s.size(); i++) {
            if(s[i] != '/') folderName += s[i];
            else {
                if(current->children.find(folderName) == current->children.end()){
                    current->children[folderName] = new Trie();
                }
                current = current->children[folderName];
                folderName = "/";
            }
        }
        if(current->children.find(folderName) == current->children.end()){
            current->children[folderName] = new Trie();
        }
        current = current->children[folderName];
        current->folderEnd = true;
    }

    void traverse(string folderName, vector<string>& ans) {
        if(this->folderEnd == true) {
            ans.push_back(folderName);
            return;
        }

        for(auto& folder : this->children) {
            folder.second->traverse(folderName + folder.first, ans);
        }
    }
};

class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        Trie* root = new Trie();
        for(auto& s: folder) {
            root->insertFolder(s);
        }
        vector<string> ans;
        root->traverse("", ans);
        return ans;
    }
};
