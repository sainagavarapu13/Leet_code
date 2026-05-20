class Solution {
public:
    vector<int> answerQueries(vector<int>& a, vector<int>& q) {
        sort( a.begin(), a.end());
        vector<int>pre(a.size());
        pre[0]=a[0];
        for( int i=1;i<a.size();i++){
                pre[i]=pre[i-1]+a[i];
        }
        vector<int>ans( q.size());
        for( int i=0;i<q.size();i++){
            int l=0, h = a.size()-1;
            int mid;
            int len =0;
            while( l<=h){
                mid = (l+h)/2;
                if( pre[mid]<=q[i] ){
                    l = mid+1;
                    len = mid+1;
                }else h = mid-1;
            }
            ans[i]=len;
        }
        return ans;
    }
};