class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(1,1);
        long long prev = 1;
        for(int i=1;i<=rowIndex;i++){
            long long n = prev * (rowIndex-i+1)/i;
            v.push_back(n);
            prev  = n;
        }
        return v;
    }
};