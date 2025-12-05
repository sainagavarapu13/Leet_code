class Solution {
public:
    vector<int> finalPrices(vector<int>& a) {
        int i,j,m=-1,k;
        vector<int>ans(a.size());
        for(i=0;i<a.size();i++){
            k=a[i];
            for(j=i+1;j<a.size();j++){
                if(a[i]>=a[j]){
                    k-=a[j];
                    break;
                }
               
            }
             ans[i]=k;
        }
        return ans;
    }
};