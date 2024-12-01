class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,bool> mp;

        for(auto& a : arr) {
            if(mp.find(a * 2) != mp.end() || (a % 2 == 0 && mp.find(a / 2) != mp.end())) return true;
            mp[a] = true;
        }
        return false;
    }
};
