class Solution {
public:
    bool fun(vector<int>& a, int k ,int m){
        int cnt=0;
        int i=0;
        while(i<a.size()){
            if(a[i]<=m){
                cnt++;
                i+=2;
            }
            else i++;
           
        }
       return cnt>=k;
    }
    int minCapability(vector<int>& a, int k) {
        int start =INT_MAX ,end = INT_MIN;
        for(int i=0;i<a.size();i++){
            start = min(start,a[i]);
            end = max(end,a[i]);
        }
        while(start < end){
            int mid = (start+end)/2;
            if(fun(a,k,mid)){
                end = mid;
            }
            else start = mid+1;
        }
        return start;
    }
};