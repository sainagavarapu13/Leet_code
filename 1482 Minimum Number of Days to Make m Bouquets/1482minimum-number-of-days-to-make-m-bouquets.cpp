class Solution {
public:
    bool fun( int b , vector<int>& a, int m , int k){
        int flag =1;
        vector<int>t;
        int cnt=0;
        for( int i=0;i<a.size();i++){
                if( a[i]<=b){
                    cnt++;
                }else{
                    t.push_back( cnt);
                    cnt=0;
                }
        }
          t.push_back( cnt);
          int tot_val=0;
          for( int i : t){
            tot_val+=(i/k);
          }
          if( m <= tot_val) return 1;
          else return 0;

    }
    int minDays(vector<int>& a, int m, int k) {
        if( (long long )k*m > (long long)a.size()) return -1;
        int l= *min_element( a.begin(),a.end());
        int h = *max_element( a.begin(),a.end());
        while( l<h){
           int mid = l+(h-l)/2;
           if( fun( mid,a,m,k)){
            h = mid;
           }else l = mid+1;
        }
        return l;
    }
};