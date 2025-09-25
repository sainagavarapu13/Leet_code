class Solution {
public:
    string customSortString(string a, string s) {
        map<char , int>f;
        for( auto&  i : s){
            f[i]++;
        }
        string c;
        for(auto& i : a ){
            if( f.count(i)){
                c+=string(f[i],i);
                f.erase(i);
            }
        }
        for( auto& [x,y]:f){
            c+=string(y,x);
        }
        return c;
    }
};