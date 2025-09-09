class Solution {
public:
    int appendCharacters(string s, string t) {
        int l=0,k=0;
        while( l<s.size() && k < t.size()){
            if( s[l]==t[k]) k++;
            l++;
        }
        return t.size()-k;
    }
};