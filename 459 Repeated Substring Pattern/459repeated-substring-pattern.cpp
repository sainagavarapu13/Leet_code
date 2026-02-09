class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str = "";
        for(int i=0;i<s.size()/2;i++){
            str +=s[i];
            if(s.size()%str.size()==0){
                int a = 1;
                for(int j=0;j<s.size();j+=str.size()){
                    if(str!=s.substr(j,str.size())){
                        a = 0;
                        break;
                    }
                }
                if(a){
                    return true;
                }
            }
        }
        return false;
    }
};