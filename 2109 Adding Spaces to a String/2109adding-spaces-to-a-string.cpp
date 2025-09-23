class Solution {
public:
    string addSpaces(string s, vector<int>& a) {
        int p=0;
        string ans;
        for(int i=0;i<s.size();i++){
           
            
             if(p<a.size()&&i==(a[p])){
                p++;
                ans.push_back(' ');
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};