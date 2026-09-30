class Solution {
public:
vector<vector<int>>ans;
    void fun(vector<int>&a ,int k,int sum,vector<int>&temp,int idx){
        if(sum==k){
            ans.push_back(temp);
            return;
        }
        if(sum>k||idx==a.size()){
            return;
        }
        temp.push_back(a[idx]);
        fun(a,k,sum+a[idx],temp,idx);
       // fun(a,k,sum+a[idx],temp,idx);
        temp.pop_back();
        fun(a,k,sum,temp,idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int k) {
        ans.clear();

        vector<int>temp;
        fun(a,k,0,temp,0);
        return ans;
    }
};