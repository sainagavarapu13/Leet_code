class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        reverse(a.begin(),a.end());
        int m=-1;
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            ans.push_back(m);
            m=max(m,a[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};