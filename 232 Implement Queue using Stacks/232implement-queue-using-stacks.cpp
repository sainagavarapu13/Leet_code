class MyQueue {
public:
    stack<int> s;
    MyQueue() {
    }
    
    void push(int x) {
        vector<int> v;
        int n = s.size();
        for(int i=0;i<n;i++){
            v.push_back(s.top());
            s.pop();
        }
        s.push(x);
        for(int i =v.size()-1;i>=0;i--){
            s.push(v[i]);
        }
    }
    
    int pop() {
        int a = s.top();
        s.pop();
        return a;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
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