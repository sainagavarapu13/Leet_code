class Solution {
public:
    string removeDuplicates(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if(a.empty()||a.back()!=s[i]){
                a.push_back(s[i]);
            }
           else{
            a.pop_back();
            }
           
        }
        return a;
    }
};