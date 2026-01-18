class Solution {
public:
    bool isvol(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
        return false;
    }
    int vowelConsonantScore(string s) {
        int vol=0,con=0;
        for(int i=0;i<s.size();i++){
            if(isvol(s[i])) vol++;
            else if(s[i]>='a'&&s[i]<='z') con++;
        }
        if(con>0){
            return floor(vol/con);
        }
        else return 0;
    }
};