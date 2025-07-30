class Solution {
public:
    vector<string> sortPeople(vector<string>& a, vector<int>& b) {
        vector<pair<string,int>>p;
        for(int i=0;i<a.size();i++){
            p.push_back({a[i],b[i]});
        }
        sort(p.begin(),p.end(),[](auto& x,auto& y){
           return x.second>y.second;
        });
        vector<string> ans;
        for(auto& i:p){
            ans.push_back(i.first);
        }
        return ans;
    }
};