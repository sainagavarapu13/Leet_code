class Solution {
public:
    string processStr(string s) {
        string res;
        for( char i : s){
            if( i>='a' && i<='z') res.push_back(i);
            else if( i == '*' && res.size()) res.pop_back();
            else if( i =='#') res.append(res);
            else if(i =='%') reverse( res.begin(),res.end());
        }
        return res;
    }
};