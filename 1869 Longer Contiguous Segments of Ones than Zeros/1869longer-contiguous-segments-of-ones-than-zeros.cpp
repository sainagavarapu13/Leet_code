class Solution {
public:
    bool checkZeroOnes(string s) {
        int one=0,zero=0,i,m=-1;
      for(i=0;i<s.size();i++){
       
        if(s[i]=='1'){
            one++;
            m=max(m,one);
        }
        else{
            one=0;
        }
      }
      cout<<m;
      int M=m;
      m=-1;
       for(i=0;i<s.size();i++){
        if(s[i]=='0'){
            zero++;
            m=max(m,zero);
        }
        else{
            zero=0;
        }
      } 
      if(M>m) return 1;
      else return 0;
    }
};