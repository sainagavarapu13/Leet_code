class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                char ch=tolower(s[i]);
                a.push_back(ch);
            }
        }
        string rev_a=a;
       
        reverse(a.begin(),a.end());
        if(rev_a==a) return true;
        else return false;
    }
};