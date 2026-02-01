class Solution {
public:
    int minimumCost(vector<int>& a) {
        int f = a[0];
        a[0]=INT_MAX;
        sort(a.begin(),a.end());
        int m1=a[0];
        int m2=a[1];
        return f+m1+m2;
    }
};