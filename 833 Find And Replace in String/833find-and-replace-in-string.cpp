class Solution {
public:
    string findReplaceString(string s, vector<int>& in, vector<string>& sy, vector<string>& t) {
        vector<pair<int,int>> a;
        for( int i=0;i<in.size();i++){
            a.push_back({in[i],i});
        }
        sort(a.rbegin(), a.rend());
        string res = s;
        for( int i=0;i<a.size();i++){
            int idx = a[i].second;
            if(s.substr(in[idx], sy[idx].size()) == sy[idx]){
                res.replace(in[idx], sy[idx].size(), t[idx]);
            }
        }
        return res;
    }
};