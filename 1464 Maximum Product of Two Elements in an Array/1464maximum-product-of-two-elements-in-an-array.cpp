class Solution {
public:
    int maxProduct(vector<int>& a) {
        sort(a.begin(),a.end(),greater<>());
        return (a[0]-1)*(a[1]-1);
    }
};