class Solution {
public:
    bool fun(int mid ,vector<int>& a, int k ){
        int start = 0,end =1,cnt=0;
        while(end<a.size()){
            while(a[end] - a[start]>mid){
                start++;
            }
            cnt+=(end-start);
            end++;
        }
        if(cnt>=k) return true;
        return false;
    }
    int smallestDistancePair(vector<int>& a, int k) {
        int start=0;
        int end = *max_element(a.begin(),a.end());
        sort(a.begin() , a.end());
        while(start<end){
            int mid = (start+end)/2;
            if(fun(mid , a,k)){
                end=mid;
            }
            else{
                start = mid+1;
            }
        }
        return start;
    }
};