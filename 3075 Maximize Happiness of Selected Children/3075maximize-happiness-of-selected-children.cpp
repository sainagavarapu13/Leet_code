class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(),h.end());
        long long a =0,n = h.size()-1,sum=0;
        for(int i=0;i<k;i++){
            if((h[n]-a)>0){
                sum += (h[n]-a);
            }
            n--;
            a++;
        }
        return sum;
    }
};