class Solution {
public:
    string restoreString(string s, vector<int>& a) {
        string ans(a.size(),' ');
        for(int i=0;i<a.size();i++){
            ans[a[i]] = s[i];
        }
        return ans;
    }
};