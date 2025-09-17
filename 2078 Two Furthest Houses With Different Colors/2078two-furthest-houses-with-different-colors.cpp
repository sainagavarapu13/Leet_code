class Solution {
public:
    int maxDistance(vector<int>& n) {
        int mi = INT_MAX;
        int ma = INT_MIN;
        for( int i=0;i<n.size()-1;i++){
            for( int j =i+1;j<n.size();j++){
            if( n[i]!=n[j]){
                ma = max( ma , abs(i-j));
            }}
        }
        return ma;
    }
};