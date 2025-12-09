class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int a=0,b=0;
        while(1){
            if(a==word1.length() && b==word2.length()) return s;
            if(word1.length()>a){
                s += word1[a];
                a++;
            }
            if(word2.length()>b){
                s += word2[b];
                b++;
            }
        }
    }
};