class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int n = matrix.size();
        int neg = 0;
        long long mn = INT_MAX;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] < 0) {
                    neg++;
                    sum -= matrix[i][j];
                    mn = min(mn, -matrix[i][j] * 1LL);
                }
                else{
                    sum += matrix[i][j];
                    mn = min(mn, matrix[i][j] * 1LL);
                }
            }
        }


        if(neg % 2 == 0) {
            return sum;
        }
        else{
            return sum - mn - mn;
        }
    }
};
