class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        sort(a.begin(), a.end() );
        for( int i=1;i<a.size()-1;i++){
            if( a[i]-a[i-1] != a[i+1]-a[i]) return 0;
        }
        return 1;
    }
};