class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int t) {
        int sum =0;
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        int cnt=0;
        if((sum/k) >= t){
            cnt++;
        }
        for(int i=k;i<a.size();i++){
            sum-=a[i-k];
            sum+=a[i];
            if(sum/k >= t){
                cnt++;
            }
        }
        return cnt;
    }
};