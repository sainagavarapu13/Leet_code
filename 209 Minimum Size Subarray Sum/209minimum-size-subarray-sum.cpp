class Solution {
public:
    int minSubArrayLen(int k, vector<int>& a) {
        int sum=0;
        int cnt=0;
        int min=INT_MAX;
        int start=0;
        int end=0;
        int len=a.size();
        if(a[start]>=k||a[end]>=k) return 1;
        while(end<len){
            
           sum+=a[end];
            while(end>=start&&sum>=k){
                if((end-start+1)<min)
                min=end-start+1;
                sum-=a[start];
                start++;
            }
            
                end++;
            
        }
        if(min==INT_MAX) return 0;
        return min;
    }
};