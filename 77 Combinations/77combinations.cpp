class Solution {
public:
vector<vector<int>> ans;
    void fun( int ind , int k, int  n, vector<int>a){
        if( a.size() == k){
            ans.push_back(a);
            return;
        }
        for( int i=ind;i<=n;i++){
            a.push_back(i);
            fun( i+1,k,n,a);
            a.pop_back();

        }
    }
    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        vector<int>a;
        fun( 1,k,n,a);
        return ans;
    }
};