class Solution {
public:
    int atMost(vector<int>& a, int k){
        if(k<0) return 0;
         int start=0,end=0;
       int sum=0;
        int cnt=0;
        while(end<a.size()){
           sum+=a[end];
            while(sum>k){
               sum-=a[start];
                 start++;
            }
            cnt+=(end-start+1);
            end++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& a, int k) {
      return atMost(a,k)-atMost(a,k-1);
    }
};