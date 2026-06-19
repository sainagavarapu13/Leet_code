class Solution {
public:
        set<vector<int>>ans;
    void fun( int i , vector<int>& a , int k , int n, vector<int>& b){
        if( b.size() == k && n==0){
            ans.insert( b);
            return ;
        }
        if( b.size() > k || i >= a.size() || n<0) return ;
        b.push_back(a[i]);
        fun( i+1, a,k , n-a[i], b);
        b.pop_back();
        fun( i+1, a, k, n, b);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>a;
        for( int i=1;i<=9;i++) a.push_back(i);
        vector<int>b;
        vector<vector<int>>res;
        fun( 0,a,k,n,b);
        for( auto i : ans ){
            res.push_back(i);
        }
        return res;
    }
};