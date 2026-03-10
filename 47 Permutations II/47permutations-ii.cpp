class Solution {
public:
    void fun(int n ,unordered_map<int,int>m, vector<vector<int>>& res,vector<int>& cur ){
        if( cur.size() == n){
            res.push_back(cur);
            return;
        }
        for( auto [x,y]:m){
            if( y==0) continue;
            cur.push_back(x);
            m[x]--;
            fun(n, m,res,cur);
            cur.pop_back();
            m[x]++;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<vector<int>>res;
        vector<int>cur;
        for( int i : nums){
            m[i]++;
        }
        fun(nums.size(),m,res,cur);
        return res;
    }
};