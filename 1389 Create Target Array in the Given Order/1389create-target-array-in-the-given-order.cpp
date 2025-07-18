class Solution {
public:
    vector<int> createTargetArray(vector<int>& a, vector<int>& I) {
        vector<int>res;
        for(int i=0;i<a.size();i++){
            res.insert(res.begin()+I[i],a[i]);
        }
        return res;
    }
};