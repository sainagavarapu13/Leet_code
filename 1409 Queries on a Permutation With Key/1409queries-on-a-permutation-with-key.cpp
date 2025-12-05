class Solution {
public:
    vector<int> processQueries(vector<int>& b, int m) {
       vector<int>a,c;
        for( int i=0;i<m;i++) a.push_back(m-i);
        for( int i=0;i<b.size();i++){
            int k = b[i];
            auto it = find( a.begin(),a.end(),k);
            int ind = m-1-(it-a.begin());
            c.push_back(ind);
            a.erase( a.begin()+(it-a.begin()));
            a.push_back(k);
        }
        
        return c;
    }
};