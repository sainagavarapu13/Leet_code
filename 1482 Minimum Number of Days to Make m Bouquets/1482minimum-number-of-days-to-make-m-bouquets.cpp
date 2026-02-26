class Solution {
public:
    bool fun(int mid ,vector<int>& a, int m, int k ){
        int got=0,cnt=0;
       for(int i=0;i<a.size();i++){
        if(a[i]<=mid){
            cnt++;
            if(cnt==k){
                got++;
                cnt=0;
            }
        }
        else{
            cnt=0;
        }
       }
       if(got>=m) return 1;
       return 0;
    }
    int minDays(vector<int>& a, int m, int k) {
        if((long long)m*k > (long long)a.size()) return -1;
        int start =*min_element(a.begin(),a.end());
        int end = *max_element(a.begin(),a.end());
        while(start<end){
           int mid = start + (end - start) / 2;
            if(fun(mid , a,m,k)){
                end=mid;
            }
            else{
                start = mid+1;
            }
        }
        return start;
    }
};