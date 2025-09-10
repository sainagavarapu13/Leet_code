class RecentCounter {
    vector<int> v;
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        v.push_back(t);
        int i=0;
        int counter = t-3000;
        while(v[i]<counter) i++;
        int a = v.size()-i;
        return a;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */