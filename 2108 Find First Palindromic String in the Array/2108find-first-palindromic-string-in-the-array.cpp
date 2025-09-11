class Solution {
public:
    bool ispa(string a){
        int c=0,b=a.length()-1;
        while(c<b){
            if(a[c]!=a[b]) return false;
            c++;
            b--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string s = "";
        for(int i=0;i<words.size();i++){
            if(ispa(words[i])){
                return words[i];
            }
        }
        return s;
    }
};