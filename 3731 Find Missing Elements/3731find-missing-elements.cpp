class Solution {
public:
    vector<int> findMissingElements(vector<int>& a) {
        vector<int>ans;
        sort(a.begin(),a.end());
        for(int i=1;i<a.size();i++){
            if(a[i]-a[i-1]!=1){
                for(int j=a[i-1]+1;j<a[i];j++)
                ans.push_back(j);
            }
        }
        return ans;
    }
};