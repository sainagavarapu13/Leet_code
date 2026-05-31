class Solution {
public:
set<vector<int>>ans;
    void fun(vector<int>&a ,int i,vector<int>&temp){
        if(i==a.size()){
            ans.insert(temp);
           return;
        }
        temp.push_back(a[i]);
        fun(a,i+1,temp);
        temp.pop_back();
        fun(a,i+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        ans.clear();
        vector<int>temp;
        sort(a.begin(),a.end());
        fun(a,0,temp);
         vector<vector<int>>res;
         for(auto& i:ans){
            res.push_back(i);
         }
        return res;
    }
};