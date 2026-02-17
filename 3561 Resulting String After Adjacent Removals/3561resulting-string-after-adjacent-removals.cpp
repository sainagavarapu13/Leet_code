class Solution {
public:
    string resultingString(string s) {
        string a;
        for( char i : s){
            if(!a.empty()){
                 int diff = abs(a.back()-i);
                 if( diff ==1 || diff == 25){
                    a.pop_back();
                    continue;
                 }
            }
            a.push_back(i);
        }
        return a;
    }
};