class MyQueue {
public:
    stack<int>st1;
    vector<int>st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
        st2.push_back(x);
    }
    
    int pop() {
        int k= st2[0];
        st2.erase(st2.begin());
        return k;
    }
    
    int peek() {
        return st2[0];
    }
    
    bool empty() {
        return st2.empty();
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