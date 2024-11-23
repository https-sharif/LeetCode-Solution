class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> st;
        for(int i = 0; i < expression.size(); i++){
            if(expression[i] == ',') continue;
            if(expression[i] == ')') {
                bool t = false;
                bool f = false;
                while(!st.empty() && st.top() != '(') {
                    char val = st.top();
                    st.pop();
                    if(val == 't') {
                        t = true;
                    }
                    else if(val == 'f') {
                        f = true;
                    }
                }
                if(st.top() == '(') st.pop();

                if(st.top() == '&') {
                    st.pop();
                    if(f == true) {
                        st.push('f');
                    }
                    else{
                        st.push('t');
                    }
                }
                else if(st.top() == '|') {
                    st.pop();
                    if(t == true){
                        st.push('t');
                    }
                    else{
                        st.push('f');
                    }
                }
                else if(st.top() == '!') {
                    st.pop();
                    if(f == true) {
                        st.push('t');
                    }
                    else{
                        st.push('f');
                    }
                }
            }
            else {
                st.push(expression[i]);
            }
        }

        if(st.top() == 't') {
            return true;
        }
        else{
            return false;
        }
    }
};
