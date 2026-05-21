class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0,close=0;
        set<int>set;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open++;
            else if(s[i]==')') close++;
            if(close>open){
               set.insert(i);
               close--;
            }
        }
        open=0,close=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(') open++;
            else if(s[i]==')') close++;
            if(close<open){
               set.insert(i);
               open--;
            }
        }
        string ans;
        for(int i=0;i<s.size();i++){
            if(!set.count(i)){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};