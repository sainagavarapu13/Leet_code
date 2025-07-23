class Solution {
public:
    int findMin(vector<int>& n) {
        int k=INT_MAX;
        for( int i=0;i<n.size();i++){
      k = min(n[i],k);
        }
        return k;
    }
};