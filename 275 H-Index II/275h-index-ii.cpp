class Solution {
public:
    int hIndex(vector<int>& a) {
        sort(a.begin(),a.end(),greater<>());
        int k=0;
        int n = a.size();
        for (int i = 0; i < n; ++i) {
            if (a[i] >=i + 1) {
                k = i + 1;
            } else {
                break;
            }
        }
        return k;
        
    }
};