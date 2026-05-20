class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& a, vector<int>& b) {
        int i=0, j=0;
        int cnt =0;
        sort( a.begin(), a.end());
        sort( b.begin(), b.end());
        while( i< a.size() &&   j < b.size()){
            while( i< a.size() &&   j < b.size() && a[i]>b[j]) j++;
            if( i<a.size() && j< b.size() && a[i]<=b[j]){
                i++;
                j++;
                cnt++;

            }
        }
        return cnt;
    }
};