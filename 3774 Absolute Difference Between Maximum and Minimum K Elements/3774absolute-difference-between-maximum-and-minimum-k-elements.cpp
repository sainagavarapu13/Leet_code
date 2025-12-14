class Solution {
public:
    int absDifference(vector<int>& a, int k) {
        int sum=0;
        sort( a.begin(),a.end());
        int cnt=0;
        for( int i=a.size()-k;i<a.size();i++){
            sum+=a[i];
        }
        for( int i=0;i<k;i++){
            cnt+=a[i];
        }
        return abs( sum - cnt);
    }
};