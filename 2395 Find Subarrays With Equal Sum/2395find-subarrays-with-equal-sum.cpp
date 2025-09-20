class Solution {
public:
    bool findSubarrays(vector<int>& a) {
        if( a.size()==2) return 0;
        vector<int>b;
        for( int i=1;i<a.size();i++){
            if( !b.empty() && find(b.begin(),b.end(),a[i-1]+a[i])!=b.end()){
                return 1;
            }
            b.push_back(a[i-1]+a[i]);
            
        }
        return 0;
    }
};