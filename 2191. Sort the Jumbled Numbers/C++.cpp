class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<pair<int,int>,int>> mp;
        for(int i = 0;i<nums.size();i++){
            int num = nums[i];
            int num2 = 0;
            int mult = 1;
            do{
                int d = num%10;Ï
                num2 += mult*mapping[d];
                mult*=10;
                num/=10;
            }while(num);
            mp.push_back({{num2,i},nums[i]});
        }
        sort(mp.begin(),mp.end());
        vector<int> result;
        for(auto [x,y]:mp){
            result.push_back(y);
        }
        return result;
    }
};
