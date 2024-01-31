class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;
    int front=0;
    MyQueue() {
        
    }
    
    void push(int x) {

        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }

        st2.push(x);
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        
    }
    
    int pop() {

         int top=st1.top();
         st1.pop();
         return top;
        
    }
    
    int peek() {

        return st1.top();
        
    }
    
    bool empty() {

        return st1.empty();
        
    }
};