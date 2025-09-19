class Solution {
public:
    int minimumMoves(string s) {
        int i=0;
        int start,j,cnt=0;
     while(i<s.size()){
        if(s[i]=='X'){
            cnt++;
            i=i+3;
        }
        else i++;
     }
     return cnt;
    }
};