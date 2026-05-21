class Solution {
public:
bool can( int m , int n, int mi , int k){
    int cnt=0;
   for( int i =1;i<=m;i++){
    cnt+=min(mi/i, n);
   }
    return cnt>=k;
}
    int findKthNumber(int m, int n, int k) {
        int l =0, h =n*m;
        while( l<h){
           int mid = (l+h)/2;
            if( can(m,n,mid,k )){
                h = mid;
            }else l = mid+1;
        }
        return l;
    }
};