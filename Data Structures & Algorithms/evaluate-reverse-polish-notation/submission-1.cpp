class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string& c : tokens) {
            if (c == "+" || c == "-" || c == "*" || c == "/") {
                int result;
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                if (c == "+") {
                    result = num1 + num2;
                } else if (c == "-") {
                    result = num2 - num1;
                } else if (c == "*") {
                    result = num1 * num2;
                } else if (c == "/") {
                    result = num2 / num1;
                }
                st.push(result);
            } 
            else {
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};
