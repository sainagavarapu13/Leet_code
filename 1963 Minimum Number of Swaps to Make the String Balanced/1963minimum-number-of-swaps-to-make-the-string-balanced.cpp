class Solution {
public:
    int minSwaps(string s) {
        int end = s.size();
        int ans=0;
        int cnt =0;
        for( int i=0;i<s.size();i++){
            if( s[i]=='[') cnt++;
            else cnt--;
            if( cnt < 0){
                while( end >=0 && s[end]==']') end--;
                cnt =1;
                ans++;
                swap( s[i],s[end]);
            }
        }
        return ans;
    }
};