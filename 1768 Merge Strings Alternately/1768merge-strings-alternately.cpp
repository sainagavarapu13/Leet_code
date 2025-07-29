class Solution {
public:
    string mergeAlternately(string a, string s) {
        string ans;
        int i,len=min(a.size(),s.size());
       for( i=0;i<len;i++){
        ans.push_back(a[i]);
         ans.push_back(s[i]);
       }
       // cout<<ans;
       while(i<a.size()){
         ans.push_back(a[i]);
         i++;
       }
        while(i<s.size()){
         ans.push_back(s[i]);
         i++;
       }
        return ans;
    }

};