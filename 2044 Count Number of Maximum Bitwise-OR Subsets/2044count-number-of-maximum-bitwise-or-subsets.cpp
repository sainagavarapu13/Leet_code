class Solution {
public:
      int ans=0;
    void check(int ind, int maxi , int pres,vector<int>& a){
            if( ind == a.size()){
                if( maxi == pres) ans++;
                return ;
            }
            check( ind+1, maxi, pres|a[ind],a);
            check( ind+1,  maxi , pres, a);
    }
    int countMaxOrSubsets(vector<int>& a) {
        int maxi =0;
        for( int i : a){
            maxi|=i;
        }
        check( 0 , maxi , 0,a);
        return ans;
    }
};