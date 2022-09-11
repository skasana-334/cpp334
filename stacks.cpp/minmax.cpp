/* we have to make 3 stacks one to store values and other two to store max and 
min elem till so far*/
stack<int>s;
    stack<int>v;
 
 
    MinStack() {
       
    }
    
    void push(int val) {
        s.push(val);
        if(v.empty()||val<=v.top()){
/*it is for like3 4 2 so v will 2 3 
    v.push(val);}}
    
    void pop() { 
        if(s.top()==getMin())
        
        v.pop();
        s.pop();
    }
    
    int top() {
      return  s.top();
    }
    
    int getMin() {
  return v.top();
    }
};
*/