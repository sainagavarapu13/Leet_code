class Solution {
public:
    string removeDuplicates(string a) {
        stack<char> s;
        for(int i = 0;i<a.length();i++){
            if(s.empty() || s.top()!=a[i]){
                s.push(a[i]);
            }
            else{
                s.pop();
            }
        }
        string t="";
        while(!s.empty()){
            t +=s.top();
            s.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};