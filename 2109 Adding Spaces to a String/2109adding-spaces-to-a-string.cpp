class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        int a=0,b=0;
        string t = "";
        while(a<s.length()){
            if(b<sp.size() && a==sp[b]){
                t +=" ";
                b++;
            }
            t+=s[a];
            a++;
        }
        return t;
    }
};