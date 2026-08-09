class Solution {
public:
    int maxBalancedShipments(vector<int>& w) {
        int ans =0;
        int maxi =w[0];
        for( int i=1;i<w.size();i++){
            if( w[i]<maxi){
                ans ++;
                if( i+1 <w.size()){
                    maxi = w[i+1];
                }
            }else{
                maxi = max( maxi, w[i]);
            }
        }
        return ans;
    }
};