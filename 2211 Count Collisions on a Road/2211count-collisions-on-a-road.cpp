class Solution {
public:
    int countCollisions(string a) {
        int s=0;
        int e=a.size()-1;
        while(s<a.size() && a[s]=='L'){
            s++;
        }
        while(e>=0&& a[e]=='R'){
            e--;
        }
        int cnt=0;
        for( int i=s;i<=e;i++){
            if( a[i] =='L' || a[i]=='R')cnt++;
        }
        return cnt;
    }
};