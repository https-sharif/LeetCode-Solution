class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int numOfElement = matrix.size() * matrix[0].size();
        int xleft = 0, xright = matrix[0].size()-1,yup = 0, ydown = matrix.size()-1;
        int dir = 0;
        while(numOfElement){
            if(dir==0){
                for(int i = xleft;i<=xright;i++){
                    ans.push_back(matrix[yup][i]);
                    numOfElement--;
                }
                yup++;
            }
            else if(dir == 1){
                for(int i = yup;i<=ydown;i++){
                    ans.push_back(matrix[i][xright]);
                    numOfElement--;
                }
                xright--;
            }
            else if(dir == 2){
                for(int i = xright;i>=xleft;i--){
                    ans.push_back(matrix[ydown][i]);
                    numOfElement--;
                }
                ydown--;
            }
            else{
                for(int i = ydown;i>=yup;i--){
                    ans.push_back(matrix[i][xleft]);
                    numOfElement--;
                }
                xleft++;
            }
            dir = (dir+1)%4;
        }
        return ans;
    }
};
