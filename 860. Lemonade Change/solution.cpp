class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0,t = 0;
        for(auto bill : bills){
            if(bill == 5){
                f++;
            }
            else if(bill == 10 && f > 0){
                f--;
                t++;
            }
            else if(t > 0 && f > 0){
                t--;
                f--;
            }
            else if(f >= 3){
                f-=3;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
