class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& a, int k) {
        sort(a.begin(),a.end(),[k](auto& x,auto& y){
            return x[k]>y[k];
        });
        return a;
    }
};