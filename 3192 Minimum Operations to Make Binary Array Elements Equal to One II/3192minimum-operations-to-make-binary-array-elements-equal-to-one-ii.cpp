class Solution {
public:
    int minOperations(vector<int>& s) {
          int cnt=0;
        if(s[0]== 0 ) cnt++;
        for( int i=1;i<s.size();i++){
            if( s[i-1]!=s[i]) cnt++;
        }
        return cnt;
    }
};