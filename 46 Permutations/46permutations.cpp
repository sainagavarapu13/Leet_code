class Solution {
public:
    void gen(int n ,map<int, int>& m, vector<vector<int>>& res , vector<int>& a){
        if( a.size() == n){
            res.push_back(a);
            return;
        }
        for( auto[x,y]:m){
            if( y ==0) continue;
            a.push_back(x);
            m[x]--;
            gen( n, m, res,a);
            a.pop_back();
            m[x]++;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>a;
        map<int , int>m;
        for( int i : nums){
            m[i]++;
        }
        vector<vector<int>>res;
        gen(nums.size(), m , res,a);
        return res;
        
    }
};