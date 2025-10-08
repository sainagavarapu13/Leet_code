class Solution {
public:
    vector<int> successfulPairs(vector<int>& b, vector<int>& a, long long k) {
        sort(a.begin(),a.end());
        int n =a.size();
        vector<int>c;
        for( int i:b){
           long long m = (k+i-1)/i;
           int ind = lower_bound(a.begin(),a.end(),m)-a.begin();
           c.push_back(n-ind);
        }
        return c;
    }
};