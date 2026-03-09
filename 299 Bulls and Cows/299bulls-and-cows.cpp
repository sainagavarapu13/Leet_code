class Solution {
public:
    string getHint(string s, string g) {
        int b = 0, c = 0;
        map<char,int> m,n;
        set<char> d;
        for(int i=0;i<s.size();i++){
            if(s[i]==g[i]){
                b++;
            }
            else{
                m[s[i]]++;
                n[g[i]]++;
                d.insert(s[i]);
            }
        }
        for(auto x:d){
                c += min(m[x],n[x]);
        }
        string t= "";
        t  += to_string(b) + 'A'+to_string(c)+'B';
        return t;
    }
};