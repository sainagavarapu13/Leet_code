class Solution {
public:
    int bitwiseComplement(int n) {
        string a;
        if(n==0) return 1;
        while(n){
            a+=(n%2)+'0';
            n/=2;
        }
        int idx=1,ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='0') {
                ans+=idx;
            }
            idx*=2;
        }
        return ans;
      
    }
};