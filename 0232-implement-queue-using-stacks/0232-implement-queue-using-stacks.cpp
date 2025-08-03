class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }

    void transfer_stack1_to_2() {
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        transfer_stack1_to_2();
        int temp = st2.top();
        st2.pop();
        return temp;        
    }
    
    int peek() {
        transfer_stack1_to_2();
        return st2.top();                
    }
    
    bool empty() {
        if(st1.empty() && st2.empty()){
            return true;
        }        
        return false;
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