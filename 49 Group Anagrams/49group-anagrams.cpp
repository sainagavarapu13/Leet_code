class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,int>> v;
        vector<string> str(strs.begin(),strs.end());
        for(int i=0;i<strs.size();i++){
            sort(str[i].begin(),str[i].end());
            v.push_back({str[i],i});
        }
        sort(v.begin(),v.end());
        vector<vector<string>> p;
        for(int i=0;i<v.size();i++){
            vector<string> s;
            s.push_back(strs[v[i].second]);
            while(i<v.size()-1 && v[i].first==v[i+1].first){
                s.push_back(strs[v[i+1].second]);
                i++;
            }
            p.push_back(s);
        }
        return p;
    }
};