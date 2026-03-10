class Solution {
public:
vector<string>ans;
    void fun( int i , string d, vector<string>& m , string a){
        if( i>=d.size()){
            ans.push_back(a);
            return;
        }
        int n = d[i]-'0';
        string v = m[n];
        for( char j : v){
            a.push_back(j);
            fun( i+1,d,m,a);
            a.pop_back();
        }
    }
    vector<string> letterCombinations(string d) {
            string a;
            ans.clear();
             vector<string>m= {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
            fun(0,d,m,a );
            return ans;
    }
};