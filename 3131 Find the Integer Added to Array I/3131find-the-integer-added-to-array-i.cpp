class Solution {
public:
    int addedInteger(vector<int>& a, vector<int>& b) {
       int m = *min_element(a.begin(),a.end());
       int n = *min_element(b.begin(),b.end());
      
       
        return  n-m;
    }
};