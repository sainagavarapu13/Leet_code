class Solution {
public:
    int partitionString(string s) {
        int a=0;
        string b = string(1,s[0]);
        for(int i=1;i<s.length();i++){
            int f = b.find(s[i]);
            if(f==string::npos){
                b +=s[i];
                continue;
            } 
            else{
                a++;
                b = s[i];
            }
        }
        return a+1;
    }
};