class Solution {
public:
    int longestContinuousSubstring(string s) {
        int cnt=1;
        int m=1;
        for(int i=1;i<s.size();i++){
            int two=s[i]-'a';
            int one=s[i-1]-'a';
           // cout<<one<<" "<<two<<"\n";
            if(two-one==1){
                cnt++;
                m=max(cnt,m);
            }
            else cnt=1;
        }
        return m;
    }
};