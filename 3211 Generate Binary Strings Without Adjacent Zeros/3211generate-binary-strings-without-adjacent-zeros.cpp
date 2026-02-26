class Solution {
public:
    void solve(string s,int n,set<string> &res){
        if(s.length()==n){
            res.insert(s);
            return;
        }
        if(s.length()==0){
            s += '0';
            solve(s,n,res);
            s.pop_back();
            s += '1';
            solve(s,n,res);
        }
        if(s.length()>0 && s[s.length()-1]=='0' && s.length()<n){
            s += '1';
            solve(s,n,res);
            s.pop_back();
        }
        if(s.length()>0 && s[s.length()-1]=='1' && s.length()<n){
            s += '0';
            solve(s,n,res);
            s.pop_back();
            s += '1';
            solve(s,n,res);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        set<string> res;
        string s;
        solve(s,n,res);
        vector<string> ans(res.begin(),res.end());
        return ans;
    }
};