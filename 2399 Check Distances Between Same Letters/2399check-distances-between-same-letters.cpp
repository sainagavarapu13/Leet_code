class Solution {
public:
    bool checkDistances(string s, vector<int>& a) {
      vector<int>m(26,-1);
      int i,j;
    
    
        for(i=0;i<s.size();i++){
            for(j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                   m[s[i]-'a']=(abs(j-i))-1;
                   break;
                }
            }
        }
      
        for(i=0;i<m.size();i++){
           if(m[i]==-1) continue;
            if(m[i]!=a[i]) return 0;
        }
        return 1;
    }
};