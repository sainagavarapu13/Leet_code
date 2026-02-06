class Solution {
public:
    int minRemoval(vector<int>& a, int k) {
        sort( a.begin(),a.end());
        int j=0;
        int ans=0;
        for( int i=0;i<a.size() && j < a.size();i++){
            while( 1ll* a[i] > 1ll*a[j]*k){
                j++;
            }
            ans = max( ans , i-j+1);
        }
        return a.size()-ans;
    }
};