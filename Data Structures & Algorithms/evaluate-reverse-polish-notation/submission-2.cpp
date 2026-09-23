class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string& s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int result;
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                if (s == "+") result = num1 + num2;
                if (s == "-") result = num1 - num2;
                if (s == "*") result = num1 * num2;
                if (s == "/") result = num1 / num2;
                st.push(result);
            } else {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
