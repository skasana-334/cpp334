    stack<int>s;
 stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s.empty()) {
            s2.push(s.top());
            s.pop();
        }
        s2.push(x);
            while(!s2.empty()) {
            s.push(s2.top());
            s2.pop();
        }
        
    }
    
    int pop() {
      int x=s.top();
        s.pop();
        return x;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};