class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int> , greater<int>>pq;
    set<int>st;
     int n = 1;
    SmallestInfiniteSet() {
        
        n=1;
        // pq.push(n);
        // st.insert(n);
    }
    
    int popSmallest() {
        int small ;
        if(!pq.empty()&&pq.top()<n){
            small = pq.top();
         pq.pop();
         st.erase(small);
        
        }
        else {
            small = n;
            n++;
        }
        return small;
    }
    
    void addBack(int num) {
        if(num<n&&!st.count(num)){
            pq.push(num);
            st.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */