class Solution {
public:
    string reverseWords(string s) {
       istringstream ss(s);
       string w;
       vector<string>b;
       while(ss >>w){
        b.push_back(w);
       }
       reverse(b.begin(),b.end());
       string k ;
      for( int i=0;i<b.size()-1;i++){
        k+=b[i];
        k+=' ';
      }
      k+=b[b.size()-1];
       return k;
    }
};