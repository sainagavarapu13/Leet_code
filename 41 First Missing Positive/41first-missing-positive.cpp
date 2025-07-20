class Solution {
public:
    int firstMissingPositive(vector<int>& n) {
        int a=1;
        sort( n.begin(),n.end());
        for( int i=0;i<n.size();i++){
            if( a==n[i]) a++;
        }
        return a;
    }
};