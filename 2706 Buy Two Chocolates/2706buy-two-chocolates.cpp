class Solution {
public:
    int buyChoco(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int sum = a[0]+a[1];
        if( sum > k) return k;
        else return k-sum;

        
    }
};