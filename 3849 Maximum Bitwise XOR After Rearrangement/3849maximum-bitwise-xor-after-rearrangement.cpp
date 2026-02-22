class Solution {
public:
    string maximumXor(string s, string t) {
        int n = t.size(),a=0;
        for(int i=0;i<n;i++){
            if(t[i]=='1')a++;
        }
        int b = n-a;
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(a>0){
                    ans += '1';
                    a--;
                }
                else ans += '0';
            }
            else{
                if(b>0){
                    ans += '1';
                    b--;
                }
                else ans += '0';
            }
        }
        return ans;
    }
};