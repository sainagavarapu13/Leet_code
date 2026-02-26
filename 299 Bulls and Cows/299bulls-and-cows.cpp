class Solution {
public:
    string getHint(string s, string g) {
        map<char, int> a,b;
        int x=0,y=0;
        for( int i=0;i<s.size();i++){
            if( s[i]==g[i]){
                x++;
                continue;
            }
            a[s[i]]++;
            b[g[i]]++;
        }
       for( auto [m,n]:a){
       if(b.find(m)!=b.end()) y+=(min( n , b[m]));
       }
          return to_string(x) + "A" + to_string(y) + "B";
    }
};