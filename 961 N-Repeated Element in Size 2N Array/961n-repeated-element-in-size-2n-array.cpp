class Solution {
public:
    int repeatedNTimes(vector<int>& a) {
        for( int i=0;i<a.size()-2;i++){
            if( a[i]==a[i+1] ||a[i]==a[i+2]) return a[i];
        }
        return a[a.size()-1];
    }
};