class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        int i,j;
        int cnt =0;
        for(i=0;i<a.size();i++){
            int p=1;
            for(j=i;j<a.size();j++){
                p=p*a[j];
                if(p<k){
                    cnt++;
                }
                else break;
            }
        }
        return cnt;
    }
};