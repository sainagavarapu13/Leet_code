class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        stringstream ss(s);
        string word;
        while(ss>>word){
            v.push_back(word);
        }
        if(v.size()!=pattern.size()) return false;
        map<char,string> m;
        for(int i=0;i<pattern.size();i++){
            auto it = m.find(pattern[i]);
            if(it == m.end() || it->second == v[i]) m[pattern[i]] = v[i];
            else return false;
        }
        map<string,char> n;
        for(auto x:m){
            n[x.second] = x.first;
        }
        return m.size()==n.size();
    }
};