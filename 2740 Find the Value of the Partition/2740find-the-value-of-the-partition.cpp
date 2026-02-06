class Solution {
public:
    int findValueOfPartition(vector<int>& a) {
        sort(a.begin(),a.end());
        int m=INT_MAX;
        for(int i=1;i<a.size();i++){
         m=min(m,a[i]-a[i-1]);
        }
        return m;
    }
};