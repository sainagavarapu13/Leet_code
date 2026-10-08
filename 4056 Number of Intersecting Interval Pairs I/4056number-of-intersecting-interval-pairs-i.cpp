class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& a) {
        sort( a.begin(), a.end());
        int ans =0;
        vector<int>b;
        for( int i=0;i<a.size();i++){
            b.push_back(a[i][1]);
        }
        // int ans =0;
        sort(b.begin(), b.end());
        for( int i=0;i<a.size();i++){
            int x = a[i][0];
            int p = lower_bound(b.begin(), b.end(),x)-b.begin();
            ans+=i-p;
        }
        return ans;
    }
};