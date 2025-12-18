class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& a) {
        sort(a.begin(),a.end());
        return a.back()+a[a.size()-2]-a[0];
        
        
    }
};