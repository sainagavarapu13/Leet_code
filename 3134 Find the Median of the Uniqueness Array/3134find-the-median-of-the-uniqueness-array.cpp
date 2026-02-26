class Solution {
public:
    bool fun( vector<int>& a , int k){
            long long cnt=0;
            long long n = 1ll*(a.size()+1)*(a.size())/2;
            int l=0;
            unordered_map<int , long int>m;
            for( int i=0;i<a.size();i++)
            {
                m[a[i]]++;
                while( m.size()>k){
                    m[a[l]]--;
                    if( m[a[l]]==0){
                        m.erase( a[l]);
                    }
                    l++;
                }
                cnt+=( i-l+1);
            }
            if( (n+1)/2 <= cnt) return 1;
            else return  0;
    }
    int medianOfUniquenessArray(vector<int>& a) {
        int l = 1;
        int h = a.size();
        while( l<h){
            int mid = l+(h-l)/2;
            if( fun(a, mid)){
                h = mid;
            }else l = mid+1;
        }
        return l;
    }
};