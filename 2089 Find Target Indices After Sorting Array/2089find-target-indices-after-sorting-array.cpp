class Solution {
public:
    vector<int> targetIndices(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            if(a[i]==k){
                ans.push_back(i);
            }
        }
        return ans;
    }
};