class Solution {
public:
    int minOperations(vector<int>& n) {
        int  k = n[0];
        for( int i=1;i<n.size();i++){
            k&=n[i];
        }
        for( int i=0;i<n.size();i++){
            if( n[i]!=k) return 1;
        }
        return 0;
    }
};