class MyQueue {
    private:
    stack<int> mainStack;
    stack<int> helperStack;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while (!mainStack.empty()) {
            helperStack.push(mainStack.top());
            mainStack.pop();
        }

        // Push new element
        mainStack.push(x);

        // Move everything back to mainStack
        while (!helperStack.empty()) {
            mainStack.push(helperStack.top());
            helperStack.pop();
        }
    }
    
    int pop() {
        int val = mainStack.top();
        mainStack.pop();
        return val;
    }
    
    int peek() {
       return mainStack.top(); 
    }
    
    bool empty() {
        return mainStack.empty();
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