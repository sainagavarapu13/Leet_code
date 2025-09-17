class Solution {
public:
    int maximumDifference(vector<int>& n) {
        int mi = INT_MAX;
        int ma =0;
        for( int i=0;i<n.size();i++){
            mi = min( mi , n[i]);
            ma = max(ma , n[i]-mi);
        }
       if( ma ==0) return -1;
       else return ma;
    }
};