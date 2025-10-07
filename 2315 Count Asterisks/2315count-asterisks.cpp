class Solution {
public:
    int countAsterisks(string s) {
        int i;
        int l=0,cnt=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='*'){
                if(l==0) cnt++;
            }
            if(s[i]=='|'){
                if(l==0) l=1;
                else l=0;
            }
        }
        return cnt;
    }
};