class Solution {
public:
    int minimumLength(string s) {
        vector<vector<int>>m(26);
        vector<char> v;
        for(int i=0;i<s.length();i++){
            v.push_back(s[i]);
            m[s[i]-'a'].push_back(i);
        }
        int res = 0;
        for(auto &x:m){
            if(x.size()>2){
                int n = x.size();
                if((n%2)!=0) res+=1;
                else res +=2;
                continue;
            }
            res +=x.size();
        }
        return res;
    }
};