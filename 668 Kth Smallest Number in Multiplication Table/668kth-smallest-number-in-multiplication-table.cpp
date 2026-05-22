class Solution {
public:
    bool fun(int m,int n,int k , int mid){
        int cnt=0;
        for(int i=1;i<=m;i++){
            cnt+=min(mid/i,n);
        }
        return cnt>=k;
    }
    int findKthNumber(int m, int n, int k) {
        int start=1,end=n*m;
        while(start<end){
            int mid=(start+end)/2;
            if(fun(m,n,k,mid)){
                end=mid;
            }
            else{
                start=mid+1;
            }

        }
        return start;
    }
};