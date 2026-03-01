class Solution {
public:
    bool isvol(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
        return false;
    }
    string trimTrailingVowels(string s) {
        
        int j=s.size()-1;
        while(j>=0&& isvol(s[j])) j--;
        string ans;
        for(int k=0;k<=j;k++){
            ans+=s[k];
        }
        return ans;
    }
};