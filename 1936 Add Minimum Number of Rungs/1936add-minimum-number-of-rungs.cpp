class Solution {
public:
    int addRungs(vector<int>& a, int d) {
        int cnt=0;
        if( a[0]>d){ cnt+=(a[0])/d;
        if( a[0]%d==0) cnt--;
        }
        for( int i=1;i<a.size();i++){
           if( a[i]-a[i-1]== d)continue;
           cnt+=( a[i]-a[i-1])/d;
            if(( a[i]-a[i-1])%d==0) cnt--;
        }
        return cnt;
    }
};