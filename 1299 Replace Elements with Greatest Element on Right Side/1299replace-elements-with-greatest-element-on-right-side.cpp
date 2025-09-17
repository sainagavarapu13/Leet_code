class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        vector<int>b;
        reverse(a.begin(),a.end());
        int m = -1;
        for( int i=0;i<a.size();i++){
           b.push_back(m);
           m = max( m, a[i]);
        }
        reverse(b.begin(),b.end());
        return b;
    }
};