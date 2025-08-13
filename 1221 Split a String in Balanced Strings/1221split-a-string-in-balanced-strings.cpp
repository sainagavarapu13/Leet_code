class Solution {
public:
    int balancedStringSplit(string s) {
        int i,sum=0,cnt=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='R'){
                cnt++;
            }
            else if(s[i]=='L') cnt--;
            if(cnt==0) sum++;
        }
        return sum;
    }
};