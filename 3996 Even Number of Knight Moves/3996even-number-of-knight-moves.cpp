class Solution {
public:
    bool canReach(vector<int>& a, vector<int>& b) {
        int i=a[0];
        int j=a[1];
        int I=b[0];
        int J=b[1];
       return ((i+j)%2)==((I+J)%2);
    }
};