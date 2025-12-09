class Solution {
public:
    string restoreString(string s, vector<int>& in) {
        string a = s;
        unordered_map<int,char> m;
        for(int i=0;i<s.length();i++){
            m[in[i]] = s[i];
        }
        for(auto x : m){
            a[x.first] = x.second;
        }
        return a;
    }
};