class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int> mp;
        for(auto& a : arr){
            a = ((a % k) + k) % k;
            if(a == 0) {
                if(mp[0] > 0){
                    mp[0]--;
                }
                else{
                    mp[0]++;
                }
            }
            else{
                if(mp[k-a] > 0){
                    mp[k-a]--;
                }
                else{
                    mp[a]++;
                }
            }
            cout << a << " ";
        }

        for(auto& [x,y] : mp){
            if(y > 0) return false;
        }

        return true;
    }
};
