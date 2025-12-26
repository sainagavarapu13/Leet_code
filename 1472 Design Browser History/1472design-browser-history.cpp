class BrowserHistory {
    vector<string>a;
    int c;
public:
    BrowserHistory(string homepage) {
       a.push_back(homepage);
       c=0;
    }
    
    void visit(string url) {
        a.erase(a.begin()+c+1,a.end());
        a.push_back(url);
        c++;
    }
    
    string back(int steps) {
        c = max(0,c-steps);
        return a[c];
        
    }
    
    string forward(int steps) {
        c = min((int)a.size()-1,c+steps);
        return a[c];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */