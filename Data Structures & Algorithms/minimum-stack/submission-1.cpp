class MinStack {
private:
    stack<int> st;
    stack<int> st_min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (st_min.empty() || val <= st_min.top()) {
            st_min.push(val);
        } 
        // else {
        //     int temp = st_min.top();
        //     st_min.pop();
        //     st_min.push(val);
        //     st_min.push(temp);
        // }
    }
    
    void pop() {
        if (st.top() == st_min.top()) {
            st.pop();
            st_min.pop();
        } else {
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st_min.top();
    }
};
