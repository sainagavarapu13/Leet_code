class Solution {
public:
bool check(vector<int>&a,int mid ,int k){
    long long cnt=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>mid){
           cnt += (a[i] + mid - 1) / mid - 1;
           if(cnt>k) return false;

        }
         }
    return true;
}
    int minimumSize(vector<int>& a, int k) {
        sort(a.begin(),a.end(),greater<>());
        int start = 1;
        int end = a[0];
        while(start<end){
            int mid = (start+end)/2;
            if(check(a,mid,k)){
                end = mid;
            }
            else{
                start = mid+1;
            }
        }
        return start;
    }
};