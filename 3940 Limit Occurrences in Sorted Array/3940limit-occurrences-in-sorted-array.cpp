class Solution {
public:
    vector<int> limitOccurrences(vector<int>& a, int k) {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
            if(m[a[i]]<=k){
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};