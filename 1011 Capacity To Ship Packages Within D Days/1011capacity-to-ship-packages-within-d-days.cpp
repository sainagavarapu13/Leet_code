class Solution {
public:
    bool check(vector<int>a ,int d ,int k){
        int sum =0,cnt=1;
        for(int i=0;i<a.size();i++){
            if(sum+a[i]<=k)  sum+=a[i];
            else{
                sum =a[i];
                cnt++;
            }
            if(cnt>d) return false;
        }
        
        if(cnt<=d) return true;
        return false;

    }
    int shipWithinDays(vector<int>& a, int d) {
        int start=0,end,sum=0;
        for(int i=0;i<a.size();i++){
            start =max(start,a[i]);
            sum+=a[i];
        }
        end = sum;
        while(start<end){
            int mid = (start+end)/2;
            if(check(a,d,mid)){
                end = mid;
            }
            else start = mid+1;
        }
        return start;
    }
};