class Solution {
public:
    string sortSentence(string s) {
        map<int,string> m;
        int j;
        for(int i=0;i<s.length();i++){
            string temp = "";
            while(i<s.length()&&s[i]!=' '){
                temp += s[i++];
            }
            int a = temp.back()-'0';
            temp.pop_back();
            m[a] = temp;
        }
        string t= "";
        for(int i=1;i<=m.size();i++){
            t += m[i];
            if(i!=m.size()){
                t+=" ";
            }
        }
        return t;
    }
};