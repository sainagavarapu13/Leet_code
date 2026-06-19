class Solution {
public:
vector<vector<int>>ans;
    void fun( int i ,vector<int>& a, int t, vector<int>& b ){
        if( t ==0) {
            ans.push_back(b);
            return ;
        }
        if( i>=a.size() || t < 0) return ;
        b.push_back(a[i]);
        fun( i, a, t-a[i], b);
        b.pop_back();
        fun( i+1, a, t, b);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        vector<int>b;
        fun( 0, a, t, b);

        return ans;
    }
};