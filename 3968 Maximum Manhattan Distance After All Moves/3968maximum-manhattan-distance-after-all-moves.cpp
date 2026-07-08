class Solution {
public:
    int maxDistance(string a) {
        int h=0,v=0,cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='L') h--;
            if(a[i]=='R') h++;
            if(a[i]=='U') v++;
            if(a[i]=='D') v--;
            if(a[i]=='_') cnt++;
        }
        return abs(h)+abs(v)+cnt;
    }
};