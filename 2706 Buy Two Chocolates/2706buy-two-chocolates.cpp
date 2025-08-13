class Solution {
public:
    int buyChoco(vector<int>& a, int k) {
        int i;
        sort(a.begin(),a.end());
        if(a[0]+a[1]-k<=0) return (k-a[0]-a[1]);
        else return k;
    }
};