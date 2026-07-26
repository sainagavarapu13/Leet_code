class Solution {
public:
    int maximumProduct(vector<int>& a) {
        int i;
        sort(a.begin(),a.end());
       int p1=a[0]*a[1]*a[a.size()-1];
       int p2=a[a.size()-1]*a[a.size()-2]*a[a.size()-3];
        return max(p1,p2);
    }
};