class MyQueue {
public:
    stack<int> temp;
    stack<int> que;
    MyQueue() {
    }
    
    void push(int x) {
        while(!que.empty()){
            temp.push(que.top());
            que.pop();
        }
        que.push(x);
        while(!temp.empty()){
            que.push(temp.top());
            temp.pop();
        }
    }
    
    int pop() {
        int pop= que.top();
        que.pop();
        return pop;
    }
    
    int peek() {
        return que.top();
    }
    
    bool empty() {
        return que.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */