class Solution {
public:
    bool matchReplacement(string s, string sub, vector<vector<char>>& m) {
        map<char,set<char>>mp;
        for(auto& i:m){
            mp[i[0]].insert(i[1]);
        }
        set<string>subs;
        int sz=sub.size();
        for(int i=0;i<=s.size()-sz;i++){
                string temp = s.substr(i,sz);
                subs.insert(temp);
        }
       for(auto& str:subs){
        bool flag=1;
        if(str==sub) return 1;
        for(int i=0;i<str.size();i++){
            if(str[i]==sub[i]) continue;
            char ch=sub[i];
            if(mp[ch].count(str[i])) continue;
            flag=0;
            break;
            
        }
        if(flag) return 1;
       }
       return 0;
    }
};