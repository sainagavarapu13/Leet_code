class Solution {
public:
    int countValidSubarrays(vector<int>& a, int x) {
        int ans=0;
        for(int i=0;i<a.size();i++){
            long long  sum=0;
            for(int j=i;j<a.size();j++){
                sum+=a[j];
                if(sum%10==x){
                    int ls;
                     if(sum==0) ls=1;
                     else
                     ls= log10(sum)+1;
                   
                  
                     long long div = (long long)pow(10LL,ls-1);
             
                    if(sum/div == x){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};