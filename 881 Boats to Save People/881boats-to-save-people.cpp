class Solution {
public:
    int numRescueBoats(vector<int>& a, int k) {
        sort( a.begin(), a.end());
        int i=0 , j = a.size()-1, cnt=0;
        while( i<=j){
            if( a[i]+a[j]<=k) i++;
            j--;
            cnt++;
        }
        return cnt;
    }
};