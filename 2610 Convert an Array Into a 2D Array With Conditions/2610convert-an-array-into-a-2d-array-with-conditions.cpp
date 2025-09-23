class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& a) {
        vector<int>f(201,0);
        int ma = INT_MIN;
        for(auto& i : a){
            f[i]++;
            ma = max( ma , f[i]);
        }
       vector<vector<int>>res(ma);
        for(int num = 1; num <= 200; num++) {
            int count = f[num];
            for (int row = 0; row < count; row++) {
                res[row].push_back(num);
            }
        }
       return res;
    }
};