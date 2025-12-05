class Solution {
public:
    vector<int> processQueries(vector<int>& a, int m) {
       vector<int>ans;
        for(int i=0;i<m;i++){
            ans.push_back(i+1);
        }
        reverse(ans.begin(),ans.end());
        vector<int>key;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<ans.size();j++){
                if(a[i]==ans[j]){
                key.push_back(m-j-1);
                ans.erase(ans.begin()+j);
                ans.push_back(a[i]);
                break;
                }
            }
        }
        return key;
    }
};