class Solution {
public:
    string interpret(string a) {
        string ans;
        int i=0;
        int len=a.size();
        while(i<=len){
            if(a[i]=='G'){
                ans.push_back('G');
            }
            else if(a[i]=='a'){
                ans.push_back('a');
                ans.push_back('l');
            }
            else if(a[i]=='('&&a[i+1]==')'){
               if(i!=len) ans.push_back('o');
            }
            i++;
        }
        return ans;
    }
};