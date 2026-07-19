class Solution {
public:
    bool canReach(vector<int>& a, vector<int>& t) {
        return ((a[0]+a[1])%2==(t[0]+t[1])%2);
    }
};