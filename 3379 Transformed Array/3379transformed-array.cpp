class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& a) {
        vector<int>ans;
        int n = a.size();
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                ans.push_back(a[i]);
            }
            else if(a[i]>0){
                int idx = (i+a[i])%n;
                ans.push_back(a[idx]);
            }
            else {
                int idx = (n+i+(a[i]))%n;
                 if (idx < 0) idx += n;
                ans.push_back(a[idx]);
            }
            
        }
        return ans;
    }
};