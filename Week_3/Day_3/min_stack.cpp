class MinStack {
public:
    stack<pair<int,int>> st;

    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val, val});
            return;
        }
        int mini= min(val, st.top().second);
        st.push({val,mini});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return (st.empty())? -1: st.top().first;
    }
    
    int getMin() {
        return (st.empty())? -1: st.top().second;
    }
};