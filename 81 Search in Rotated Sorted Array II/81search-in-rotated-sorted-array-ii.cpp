class Solution {
public:
    bool search(vector<int>& a, int t) {
        if( find(a.begin(),a.end(),t)!=a.end())return 1;
        else return 0;
    }
};