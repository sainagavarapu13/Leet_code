class Solution {
public:
    bool search(vector<int>& a, int k) {
       if( find(a.begin(),a.end(),k)!=a.end()) return true;
       else return false;
    }
};