class MyQueue {
public:
    stack<int> input;
    stack<int> ans;
    int peekEl = -1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty()){
            peekEl = x;
        }
        input.push(x);
    }
    
    int pop() {
        if(ans.empty()){
            while(!input.empty()){
                ans.push(input.top());
                input.pop();
            }
        }
        int val = ans.top();
        ans.pop();
        return val;

    }
    
    int peek() {
        if(ans.empty())
            return peekEl; 
             
        return ans.top();
    }
    
    bool empty() {
        if(input.empty() && ans.empty())
        return true;
        else 
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