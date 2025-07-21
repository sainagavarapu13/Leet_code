class Solution {
public:
    string reverseVowels(string s) {
        int l =0;
        int k = s.length()-1;
        while(l<k){
            char t = tolower(s[l]);
            char r = tolower(s[k]);
            if((t=='a' || t=='e' || t== 'i' || t=='o'||t=='u') && (r=='a' || r=='e' || r== 'i' || r=='o'||r=='u') ){
                char temp = s[l];
                s[l]=s[k];
                s[k]= temp;
                l++;
                k--;

            }else if( (t=='a' || t=='e' || t== 'i' || t=='o'||t=='u') ) k--;
            else l++;
        }
        return s;
    }
};