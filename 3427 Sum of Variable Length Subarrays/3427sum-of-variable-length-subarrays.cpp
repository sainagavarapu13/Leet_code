class Solution {
public:
    int subarraySum(vector<int>& a) {
        int sum=0,tot=0;
        for(int i=0;i<a.size();i++){
           int k=max(0,i-a[i]);
           sum=0;
           for(int j=k;j<=i;j++){
                sum+=a[j];
           }
           tot+=sum;
        }
        return tot;
    }
};