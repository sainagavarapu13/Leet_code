class Solution {
public:
    bool isItPossible(string a, string b) {
        map<char, int>m,n;
        for( char i : a){
            m[i]++;
        }
        for( char i :b ){
            n[i]++;
        }
       // if( m.size() == n.size()) return 1;
        for( int i=0;i<26;i++){
            for( int j =0;j<26;j++){
                 if (m[i+'a'] == 0 || n[j+'a'] == 0)
                    continue;
                m[i+'a']--;
                n[j+'a']--;
                 m[j+'a']++;
                n[i+'a']++;
                int a=0,b=0;
                for( char k ='a';k<='z';k++){
                    if(m[k]>0) a++;
                    if( n[k]>0) b++;
                }
                if(a == b) return 1;
                 m[j+'a']--;
                n[i+'a']--;
                m[i+'a']++;
                n[j+'a']++;
            }
        }
        return 0;
    }
};