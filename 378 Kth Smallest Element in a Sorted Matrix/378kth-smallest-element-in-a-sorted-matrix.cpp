class Solution {
public:
    bool can( int m , vector<vector<int>>& a, int k){
        int cnt=0;
        int r = a.size()-1, c =0;
        while( r>=0 && c < a[0].size()){
            if( a[r][c]<=m){
                cnt+=(r+1);
                c++;
            }else r--;
        }
        return cnt >=k;
    }
    int kthSmallest(vector<vector<int>>& a, int k) {
        int l =a[0][0];
        int h = a[a.size()-1][a[0].size()-1];
        while( l<h){
            int mid = l+(h-l)/2;
            if( can(mid, a, k)){
                h = mid;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};