class Solution {
public:
    int st(string s){
        string res = s;
        reverse(s.begin(),s.end());
        if( res ==s) return 1;
        else return 0;
    }
    string firstPalindrome(vector<string>& w) {
        for( string c : w){
            if( st(c)) return c;
            
        }
        return "";
        
    }
};