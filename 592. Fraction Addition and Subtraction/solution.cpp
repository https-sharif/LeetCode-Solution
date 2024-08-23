class Solution {
public:
    int gcd(int a, int b) { 
        return (b == 0) ? a : gcd(b, a % b);
    }

    int lcm(int a, int b) { 
        return (a * b) / gcd(a, b);
    }

    string fractionAddition(string expression) {
        vector<int> numerator, denominator;
        int i = 0;
        int num = 0, den = 0;
        bool neg = false;
        bool numParse = true;
        while (i < expression.size()) {
            if (expression[i] == '-' || expression[i] == '+') {
                if (i > 0) {
                    numerator.push_back((neg) ? -num : num);
                    denominator.push_back(den);
                }
                neg = (expression[i] == '-');
                num = 0;
                den = 0;
                numParse = true;
            } else if (expression[i] == '/') {
                numParse = false;
            } else {
                if (numParse) {
                    num = num * 10 + (expression[i] - '0');
                } else {
                    den = den * 10 + (expression[i] - '0');
                }
            }
            i++;
        }

        numerator.push_back((neg) ? -num : num);
        denominator.push_back(den);

        int n = numerator.size();

        int multiple = denominator[0];
        for (int i = 1; i < n; i++) {
            multiple = lcm(denominator[i], multiple);
        }

        int x = 0;
        for (int i = 0; i < n; i++) {
            x += (multiple / denominator[i]) * numerator[i];
        }

        if (x == 0) {
            return "0/1";
        }

        int fraction = gcd(abs(x), abs(multiple));
        x /= fraction;
        multiple /= fraction;
        
        string ans = to_string(x) + '/' + to_string(multiple);
        return ans;
    }
};
