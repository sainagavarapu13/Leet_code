class Solution {
public:
    string trimTrailingVowels(string s) {
        int i = s.size()-1;
        set<char>v = {'a','e','i','o','u'};
        while( i>=0 &&  v.count( s[i])){
           i--;
        }
        return s.substr( 0,i+1);
    }
};