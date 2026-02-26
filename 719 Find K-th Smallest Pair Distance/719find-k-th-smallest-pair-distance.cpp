class Solution {
public:
    bool fun(vector<int>& a, int v,int k){
        int cnt=0;
        sort( a.begin(),a.end());
        int j =0;
        for( int i=0;i<a.size();i++){
            while(a[i]-a[j]>v ){
                j++;
            }
            cnt+=(i-j);
        }

       
        return cnt>=k;
    }
    int smallestDistancePair(vector<int>& a, int k) {
        int l =0;
        int h = *max_element(a.begin(),a.end());
        while(l<h){
            int mid = l+(h-l)/2;
            if( fun( a,mid,k))
                h = mid;
                else l =mid+1;
        }
        return l;
    }
};