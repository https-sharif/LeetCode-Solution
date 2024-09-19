class Solution {
public:
    int operation(int a, int b, char op){
        if(op == '+') return a + b;
        if(op == '-') return a - b;
        return a * b;
    }

    vector<int> diffWaysToCompute(string expression) {
        vector<int> result;
        bool integer = true;

        for(int i = 0; i < expression.size(); i++){
            if(expression[i] < '0' || expression[i] > '9'){
                vector<int> left = diffWaysToCompute(expression.substr(0,i));
                vector<int> right = diffWaysToCompute(expression.substr(i+1));

                integer = false;

                for(auto& x : left){
                    for(auto& y : right){
                        result.push_back(operation(x, y, expression[i]));
                    }
                }
            }
        }

        if(integer == true) result.push_back(stoi(expression));

        return result;
    }
};
