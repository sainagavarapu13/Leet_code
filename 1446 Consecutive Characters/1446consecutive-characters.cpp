class Solution {
public:
    int maxPower(string s) {
        int m = INT_MIN, cnt =1;
        for( int i=1;i<s.size();i++){
        if( s[i]==s[i-1]){
            cnt++;
            m = max(m, cnt);
        }else{
            cnt=1;
        }
        }
         m = max(m, cnt);
         return m;
    }
};