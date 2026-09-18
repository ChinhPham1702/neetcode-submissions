class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char& c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char d = st.top();
                if ((c == ')' && d == '(')
                 || (c == '}' && d == '{')
                 || (c == ']' && d == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
