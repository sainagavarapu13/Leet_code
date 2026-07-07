class Solution {
public:
vector<vector<int>>ans;
    void check(int k,int n,vector<int>temp,int num,int sum){
        if(num>10) return;
        if(num==10&&temp.size()==k&&sum==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(num);
        check(k,n,temp,num+1,sum+num);
        temp.pop_back();
        check(k,n,temp,num+1,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        ans.clear();
        vector<int>temp;
        check(k,n,temp,1,0);
        return ans;
    }
};