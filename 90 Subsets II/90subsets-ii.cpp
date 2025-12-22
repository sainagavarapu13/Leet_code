class Solution {
public:
    set<vector<int>> sb;
    vector<int> v;
    void dfs(vector<int> n,int i){
        if(i>=n.size()){
            sb.insert(v);
            return;
        }
        v.push_back(n[i]);
        dfs(n,i+1);
        v.pop_back();
        dfs(n,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(nums,0);
        vector<vector<int>> res(sb.begin(),sb.end());
        return res;
    }
};