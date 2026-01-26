class Solution {
public:
    int furthestDistanceFromOrigin(string a) {
        int r=0,l=0,u=0;
        for(char i : a ){
            if(i=='R') r++;
            else if( i=='L') l++;
            else u++;
        }
        int cnt=0;
        if( l == r){
            cnt=l+u-r;
        }else{
            cnt = max( l,r)-min(l,r)+u;
        }
        return abs(cnt);
        
    }
};