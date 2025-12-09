class Solution {
public:
    int minLength(string s) {
        string a;
        for(auto &i:s){
            if(i!='B'&&i!='D'){
                a.push_back(i);
            }
            else if(i=='B'){
                if(!a.empty()&&a.back()=='A') a.pop_back();
                else a.push_back(i);
            }
            else if(i=='D'){
                if(!a.empty()&&a.back()=='C') a.pop_back();
                 else a.push_back(i);
            }
        }
        return a.size();
    }
};