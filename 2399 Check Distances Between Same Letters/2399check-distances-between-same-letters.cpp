class Solution {
public:
    bool checkDistances(string s, vector<int>& d) {
        vector<int>f(d.size(),-1);
        for(int i=0;i<s.size();i++){
            if( f[s[i]-'a']==-1){
                f[s[i]-'a']=i;
            }else{
                f[s[i]-'a'] = i-1-f[s[i]-'a'];
            }
        }
        for( int i=0;i<d.size();i++){
            cout << f[i] << " ";
            if( f[i] != -1 && d[i]!=f[i]) return 0;
        }
        return 1;
    }
};