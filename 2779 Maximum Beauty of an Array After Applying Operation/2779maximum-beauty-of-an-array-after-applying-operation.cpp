class Solution {
public:
    int maximumBeauty(vector<int>& a, int k) {
        int cnt =0;
        int j=0,i=0;
        sort( a.begin(),a.end());
        while( j<a.size()){
            while( a[j]-a[i]>2*k){
                i++;
            }
            cnt = max( cnt , j-i+1);
            j++;
        }
        return cnt;
    }
};