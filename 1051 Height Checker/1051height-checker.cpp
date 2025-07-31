class Solution {
public:
    int heightChecker(vector<int>& a) {
        vector<int>b(a.begin(),a.end());
        sort(b.begin(),b.end());
        int cnt=0;
        for( int i=0;i<b.size();i++){
                if( a[i]!=b[i]) cnt++;
        }
        return cnt;
    }
};