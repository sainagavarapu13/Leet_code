class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int l=0,r=0;
        int ans=0;
        int ones =0,zero=0;
        while(r<s.size()){
                if( s[r]=='0') zero++;
                else ones++;
                while( zero > k && ones >k){
                     if( s[l]=='0') zero--;
                        else ones--;
                        l++;
                }
                ans+=(r-l+1);
                r++;
        }
        return ans;
        
    }
};