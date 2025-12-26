class BrowserHistory {
    vector<string> v;
    int a = 0;
public:
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        a = 0;
    }
    
    void visit(string url) {
        v.erase(v.begin()+a+1,v.end());
        v.push_back(url);
        a++;
    }
    
    string back(int steps) {
        a = max(0,a-steps);
        return v[a];
    }
    
    string forward(int steps) {
        int c = v.size()-1;
         a = min(c,a+steps);
        return v[a];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */