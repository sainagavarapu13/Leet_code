
class Solution {
public:
    bool isvol(char ch){
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U') return true;
    else return false;
}
    string reverseVowels(string s) {
        int i=0;
        int start=0;
            int end=s.size()-1;
        while(start<end){
            while(start<end&&!isvol(s[start])) start++;
            while(start<end&&!isvol(s[end])) end--;
            swap(s[start],s[end]);
           start++;
           end--;
        }
        return s;
    }
};