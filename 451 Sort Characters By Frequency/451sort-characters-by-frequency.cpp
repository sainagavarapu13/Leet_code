class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(int i:s){
            m[i]++;
        }
        vector<pair<char,int>>p(m.begin(),m.end());
        sort(p.begin(),p.end(),[](auto& x,auto& y){
            return x.second>y.second;
        });
        string ans;
        for(auto& i:p){
            ans.append(i.second,i.first);
        }
    return ans;
    }
};