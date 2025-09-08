class Solution {
public:
    string sortSentence(string s) {
        
        string str;
        int sp=0;
         for(int i=0;i<s.size();i++){
            if(s[i]==' ')
            sp++;
          }
          vector<string>ans(sp+1);
        for(int i=0;i<s.size();i++){
           if(s[i]==' ') continue;
            if(s[i]>='0'&&s[i]<='9'){
                int idx=(s[i]-'0')-1;
                ans[idx]=str;
                cout<<str<<" ";
                str.clear();
            }
            else{
                 str+=s[i];
            }
        }
        str.clear();
        for(int i=0;i<ans.size();i++){
            str+=ans[i];
           if(i!=ans.size()-1) str+=' ';
        }
        return str;
    }
};