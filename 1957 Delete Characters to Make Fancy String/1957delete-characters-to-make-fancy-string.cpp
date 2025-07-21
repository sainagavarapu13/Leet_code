class Solution {
public:
    string makeFancyString(string s) {
        string a;
        if(s.size()<=2) return s;
        int i;
        a.push_back(s[0]);
        a.push_back(s[1]);
        int k=2;
        for(i=2;i<s.size();i++){
            if(a[k-2]==s[i]&&a[k-1]==s[i]) continue;
            else a.push_back(s[i]);
            k++;
        }
      
        return a;
    }
};