class Solution {
public:
    string removeDuplicates(string a) {
        stack<char>s;
        for( char i : a){
            if( !s.empty()){
                if(s.top()==i){
                    s.pop();
                }else{
                    s.push(i);
                }
            }else s.push(i);
        }
        string m;
        while(!s.empty()){
            m+=s.top();
            s.pop();
        }
        reverse(m.begin(),m.end());
        return m;
    }
};