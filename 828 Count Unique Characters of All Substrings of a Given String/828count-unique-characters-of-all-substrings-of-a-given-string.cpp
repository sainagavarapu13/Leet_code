class Solution {
public:
    int uniqueLetterString(string s) {
        vector<int>left(s.size()) , r(s.size());
        long long cnt=0;
        vector<int>p(26,-1);
        for( int i=0;i<s.size();i++){
            left[i]=p[s[i]-'A'];
            p[s[i]-'A']=i;
        }
        // for( int i=0;i<26;i++){
        //     if( p[i]==-1) p[i]=s.size();
        // }
        fill( p.begin(),p.end(),(int)s.size());
        for( int i = s.size()-1; i>=0;i--){
            r[i]=p[s[i]-'A'];
            p[s[i]-'A']=i;
        }
        for( int i=0;i<s.size();i++){
                cnt+=((long)(i-left[i])*(long)(r[i]-i));
        }
        return cnt;
    }
};