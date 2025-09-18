class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& n) {
        vector<int> v(n.size());
        for(int i=0;i<n.size();i++){
            set<int> a(n.begin(),n.begin()+1+i);
            set<int> b(n.begin()+i+1,n.end());
            v[i] = a.size()-b.size();
        }
        return v;
    }
};