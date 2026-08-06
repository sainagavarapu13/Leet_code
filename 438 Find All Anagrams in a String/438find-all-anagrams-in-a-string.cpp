class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int l=0;
       vector<int>m(26,0), n(26,0);
        for( char i : p){
            m[i-'a']++;
        }
        vector<int>a;
        for( int r=0;r<s.size();r++){
            n[s[r]-'a']++;
            if( r-l+1==p.size()){
                if( n==m){
                    a.push_back(l);
                }
               n[s[l]-'a']--;
                l++;
            }
        }
        return a;
    }
};