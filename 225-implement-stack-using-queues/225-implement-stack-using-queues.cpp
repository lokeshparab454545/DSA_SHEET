class MyStack {
public:
    queue<int>q;
    int peek = -1;
    MyStack() {
        
    }
    
    void push(int x) {
        peek = x;
        q.push(x);
    }
    
    int pop() {
        int n = q.size();
        n -= 1;
        while(n--){
            peek = q.front();
            q.pop();
            q.push(peek);
        }
        int ans = q.front();
        q.pop();
        return ans;
    }
    
    int top() {
        return peek;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */