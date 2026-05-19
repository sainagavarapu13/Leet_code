class Solution {
public:
    long long appealSum(string s) {
        vector<int>a(26,-1);
        long long cnt=0;
        for( int i=0;i<s.size();i++){
            int c = s[i]-'a';
            cnt+=((long)(i-a[c])*( long)(s.size()-i));
            a[c]=i;
        }
        return cnt;
    }
};