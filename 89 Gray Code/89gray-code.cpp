class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> r;
        int size = 1<<n;
        for(int i=0;i<size;i++) r.push_back(i^(i>>1));
        return r;
    }
};