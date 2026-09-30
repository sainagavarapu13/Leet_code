class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>dp;
    set<tuple<int,int,vector<int>>>vis;
    void check(int idx , vector<int>& a, int k,int sum,vector<int>&temp){
        if(sum==k){
            if (!dp.count(temp)) {   
                dp.insert(temp);
                ans.push_back(temp);
            }
            return;
        }
        if(vis.count({idx,sum,temp})) return;
        vis.insert({idx,sum,temp});
       if(sum>k||idx>=a.size()) return;
       if(dp.count(temp)){
        return ;
       }
       temp.push_back(a[idx]);
       check(idx+1,a,k,sum+a[idx],temp);
       temp.pop_back();
       check(idx+1,a,k,sum,temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& a, int k) {
        vector<int>temp;
        ans.clear();
        dp.clear();
        sort(a.begin(),a.end());
        check(0,a,k,0,temp);
        cout<<a.size();
        return ans;
    }
};