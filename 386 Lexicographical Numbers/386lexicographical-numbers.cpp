class Solution {
public:
    vector<int> lexicalOrder(int n) {
       int k =1;
       vector<int>ans;
       for(int i=1;i<=n;i++){
        ans.push_back(i);
       }
       sort(ans.begin(),ans.end(),[](auto& x,auto& y){
            return to_string(x) < to_string(y);
       });
       return ans;
    }
};