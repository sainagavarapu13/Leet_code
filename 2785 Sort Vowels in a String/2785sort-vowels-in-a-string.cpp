class Solution {
public:
    string sortVowels(string s) {
        unordered_set<char>n = {'a','e','i','o','u','A','E','I','O','U'};
        string b;
        for( char i :s){
            if(n.count(i) ){
                b+=i;
            }
        }
        sort(b.begin(),b.end());
        int k=0;
         for(int i=0;i<s.size();i++){
            if(n.count(s[i]) ){
                s[i]=b[k++];
            }
        }
        return s;
    }
};