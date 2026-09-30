class Solution {
public:
 vector<vector<int>>ans;
 void fun(int n,vector<int>&temp,int idx,int k){
    if(temp.size()==k){
        ans.push_back(temp);
        return;
    }
    if(idx>n){
        return;
    }
    temp.push_back(idx);
    fun(n,temp,idx+1,k);
    temp.pop_back();
    fun(n,temp,idx+1,k);
 }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        ans.clear();
        fun(n,temp,1,k);
        return ans;
    }
};