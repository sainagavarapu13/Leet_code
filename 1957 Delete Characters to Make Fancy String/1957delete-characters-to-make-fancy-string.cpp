class Solution {
public:
    string makeFancyString(string s) {
        int cnt=0;
        string res;
        res.push_back(s[0]);
        for( int i=1;i<s.length();i++){
            if( s[i-1]== s[i]) cnt++;
            else cnt =0;
            if( cnt <2) res.push_back(s[i]);
            
        }
        return res;
    }
};