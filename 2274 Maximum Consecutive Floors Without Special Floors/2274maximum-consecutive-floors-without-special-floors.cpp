class Solution {
public:
    int maxConsecutive(int a, int b, vector<int>& x) {
        int ma= INT_MIN;
        sort( x.begin(),x.end());
        ma = max( x[0]-a ,ma );
        for(int i=1;i<x.size();i++){
                ma = max(x[i]-x[i-1]-1,ma );
        }
        ma = max( ma, b-x.back());
        return ma;
    }
};