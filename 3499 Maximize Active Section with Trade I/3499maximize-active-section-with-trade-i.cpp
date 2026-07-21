class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        s = "1"+s+"1";
        int  n = s.size(),a=0,res=0;
        for(int i=0;i<n;i++) if(s[i]=='1') a++;
        // cout<<a<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='0') continue;
            if(s[i]=='1'){
                int b = 0,c = 0;
                int g = i;
                while(g<n && s[g]=='1') g++;
                for(int j=i-1;j>=0;j--){
                    if(s[j]=='0') b++;
                    else break;
                }
                for(int k=g;k<n;k++){
                    if(s[k]=='0') c++;
                    else break;
                }
                i = g-1;
                if(b>0 && c>0) res = max(b+c,res);
                // cout<<a<<" "<<res<<endl;
            }
        }
        return a-2+res;
    }
};