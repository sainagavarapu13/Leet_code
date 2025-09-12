class Solution {
public:
    string removeDigit(string s, char k) {
        int i=0;
        string m;
        while(i<s.size()){
            string b;
            if(s[i]==k){
                string b(s.begin(),s.begin()+i);
                int I=i+1;
                while(I<s.size()){
                b+=s[I];
                I++;
                }
                m=max(b,m);
                b.clear();
            }
            i++;
        }
        return m;
    }
};