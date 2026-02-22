class Solution {
public:
    bool check(string d, string s){
        if( d.size()!=s.size()) return false;
        vector<int>m1(10,0),m2(10,0);
        for( char c : d) m1[c-'0']++;
        for( char c : s) m2[c-'0']++;
        return m1 ==m2;
    }
    bool isDigitorialPermutation(int n) {
        int val = n;
        string s = to_string(val);
        vector<string>dig = {"1","2","145","40585"};
        for( string i : dig){
            if( check(i,s)){
                return true;
            }
        }
        return false;
    }
};