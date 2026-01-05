class Solution {
public:
    string largestEven(string s) {
        int i = s.size()-1;
        while(i>=0&&s[i]=='1') i--;
        string ans ;
        for(int j=0;j<=i;j++){
            ans.push_back(s[j]);
        }
        return ans;
    }
};