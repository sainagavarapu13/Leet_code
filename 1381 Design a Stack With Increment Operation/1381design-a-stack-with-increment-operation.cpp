class CustomStack {
public:
    vector<int>s;
    int size , top=-1;
    CustomStack(int a) {
        s=vector<int>(a);
        size = a;
    }
    
    void push(int x) {
        if( top < size-1){
            top++;
            s[top]=x;

        } 
    }
    
    int pop() {
        int k=-1;
        if( top !=-1){
            k = s[top];
            top--;
        }
        return k;
        
    }
    
    void increment(int k, int val) {
        int n = min( k , size);
        for( int i=0;i<n;i++){
            s[i]+=val;
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