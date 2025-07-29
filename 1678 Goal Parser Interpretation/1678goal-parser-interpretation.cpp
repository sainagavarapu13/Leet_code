class Solution {
public:
    string interpret(string c) {
        string a;
        for( int i=0;i<c.size();){
            if(c[i]=='(' && c[i+1]==')'){ a.push_back('o');
                i+=2;}
            else if( c[i]== ')' || c[i]=='(') i++;
            else if(c[i]!='(' || c[i]!=')') {
                a.push_back(c[i]);
                i++;
                }
            
        }
        return a;
    }
};