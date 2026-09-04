class Solution {
public:
    int firstStableIndex(vector<int>& a, int k) {
        vector<int>p(a.size(),0);
        vector<int>s(a.size(),0);
        p[0]=a[0];
        for( int i=1;i<a.size();i++){
            p[i]= max(p[i-1], a[i]);
        }
        s[a.size()-1]=a.back();
        for( int i=a.size()-2;i>=0;i--){
            s[i]= min(s[i+1], a[i]);
        }
        for( int i=0;i<a.size();i++){
            if( p[i]-s[i]<=k) return i;
        }
        return -1;
    }
};