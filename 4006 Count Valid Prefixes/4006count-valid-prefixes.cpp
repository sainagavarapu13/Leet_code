class Solution {
public:
    int countValidPrefixes(string s) {
        int res = 0,a=0,b=0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='0')a++;
            else if(s[i]=='1') b++;
            if(abs(a-b)<=1) res++;
        }
        return res;
    }
};