class Solution {
public:
    bool check(vector<int>a , int k, int val){
        int sum =0,cnt=1;
        for(int i=0;i<a.size();i++){
           if (sum + a[i] <= val)  sum+=a[i];
           else {
                sum=a[i];
                cnt++;
            }
            if(cnt>k) return false;
        }
        return true;
    }
    int splitArray(vector<int>& a, int k) {
        int start=0,end=0,sum=0;
        for(int i=0;i<a.size();i++){
            start = max(start,a[i]);
            sum+=a[i];
        }
        end=sum;
        while(start<end){
            int mid = (start+end)/2;
            if(check(a,k,mid)){
                end = mid;
            }
            else start = mid+1;
        }
        return start;
    }
};