class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& a) {
       int i,j;
       vector<int>ans;
       for(i=0;i<a.size();i++){
        set<int>s1,s2;
        for(j=0;j<=i;j++){
            s1.insert(a[j]);
        }
        for(j=i+1;j<a.size();j++){
            s2.insert(a[j]);
        }
        ans.push_back(s1.size()-s2.size());
       }
       return ans;
    }
};