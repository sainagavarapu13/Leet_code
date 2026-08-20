class Solution {
public:
    vector<int> resultArray(vector<int>& n) {
        vector<int>a,b;
        a.push_back(n[0]);
        b.push_back(n[1]);
        for( int i=2;i<n.size();i++){
            auto& x = a.back();
            auto& y = b.back();
            if( x>y)a.push_back(n[i]);
            else b.push_back(n[i]);
        }
        a.insert(a.end(),b.begin(),b.end());
        return a;
        
    }
};