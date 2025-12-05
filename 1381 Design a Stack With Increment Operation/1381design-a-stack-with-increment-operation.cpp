class CustomStack {
public:
    vector<int>stack;
    int top=-1,size;
    CustomStack(int maxSize) {
        stack=vector<int>(maxSize);
        size=maxSize;
    }
    
    void push(int x) {
        
        if(top<size-1){
            top++;
        stack[top]=x;
        }
    }
    
    int pop() {
        int k=-1;
        if(top!=-1){
            k=stack[top];
             top--;
        }
        return k;
    }
    
    void increment(int k, int val) {
        int i;
        int K=min(k,size);
        for(i=0;i<K;i++){
            stack[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */