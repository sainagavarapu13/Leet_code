class Solution {
public:
    vector<int> maxKDistinct(vector<int>& n, int k) {
        sort(n.begin(),n.end(),greater<>());
        vector<int>b;
        b.push_back(n[0]);
        for( int i=1;i<n.size();i++){
            if( b.size()==k) return b;
            if( n[i-1]!=n[i]) b.push_back(n[i]);
        }
        return b;
       
    }
};