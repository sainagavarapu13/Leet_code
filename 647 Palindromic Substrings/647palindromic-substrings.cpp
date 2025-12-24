class Solution {
public:
    bool ispalin(string &s){
        int start=0;
        int end=s.size()-1;
        while(start<end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    int countSubstrings(string s) {
       int cnt=0;
        for(int i=0;i<s.size();i++){
            string temp;
            for(int j=i;j<s.size();j++){
                temp.push_back(s[j]);
                string t = temp;
                
                if(ispalin(temp)) cnt++;
            }
        }
        return cnt;
    }
};