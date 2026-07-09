class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& a, int k, vector<vector<int>>& q) {
       vector<int>v(n,0);
       int num=0;
       for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])>k){
            num++;
        }
        v[i]=num;
       }
      // for(auto& i:v) cout<<i<<" ";
       vector<bool>ans;
        for(auto& i:q){
            if(v[i[0]]==v[i[1]]){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};