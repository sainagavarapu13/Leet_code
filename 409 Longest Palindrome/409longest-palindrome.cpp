class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        for(auto& i:s) m[i]++;
        int sum=0,cnt=0;
        for(auto& [n,c]:m){
            if(c>1){
              if(c%2==0)  sum+=c;
              else sum+=(c-1);
            }
             if(c==1||c%2!=0) cnt++;
        }
        if(cnt>=1) cnt=1;
        return sum+cnt;
    }
};