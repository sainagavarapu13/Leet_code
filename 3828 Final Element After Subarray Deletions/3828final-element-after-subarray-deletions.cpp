class Solution {
public:
    int finalElement(vector<int>& a) {
        return max(a[0] , a.back());
    }
};