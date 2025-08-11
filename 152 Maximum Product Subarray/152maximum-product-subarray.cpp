class Solution {
public:
    int maxProduct(vector<int>& n) {
        if( n.size() == 1) return n[0];
        int maxi = 0;
        for( int i=0;i<n.size();i++){
            int pro=n[i];
            maxi = max(pro,maxi);
            for( int j =i+1 ; j<n.size();j++){
                pro*=n[j];
                maxi = max(pro,maxi);
            }
        }

        return maxi;
    }
};