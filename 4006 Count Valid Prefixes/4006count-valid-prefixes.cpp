class Solution {
public:
    int countValidPrefixes(string s) {
        int z=0,o=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') z++;
            else o++;
            if(abs(z-o)==1||abs(z-o)==0){
                cnt++;
            }
        }
        return cnt;
    }
};