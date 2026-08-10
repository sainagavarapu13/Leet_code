class Solution {
public:
    string convert(string s, int n) {
        string ans;
        if(n==1) return s;
        int st = (n-1)*2;
        int k=st;
        for(int i=0;i<n;i++){
            int d1=st;
            int d2=k-st;
            int f=1;
            for(int j=i;j<s.size();){
                ans.push_back(s[j]);
               if(i==0||i==n-1){
                j+=k;
               }
               else{
                if(f) j+=d1;
                else j+=d2;
               }
               f=!f;
            }
            st-=2;
        }
        return ans;
    }
};