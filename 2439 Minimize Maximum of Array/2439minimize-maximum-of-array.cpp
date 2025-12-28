class Solution {
public:
    bool check(vector<int>&a , int k){
        long long  sum=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            if(sum>1LL*(i+1)*k) return false;
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& a) {
        long long start=0,end=0;
        long long sum=0;
        for(int i=0;i<a.size();i++){
           
           end = max(end,(long long)a[i]);
        }
        
        while(start<end){
            long long mid = (start+end)/2;
            if(check(a,mid)){
                end=mid;
            }
            else {
                start = mid+1;
            }
        }
        return start;
    }
};