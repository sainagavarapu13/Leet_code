class Solution {
public:
    int passwordStrength(string password) {
        map<char,int> m;
        int res = 0;
        for(int i=0;i<password.size();i++){
            m[password[i]]++;
            if(m[password[i]]==1){
                if(password[i]>='a' && password[i]<='z') res++;
                else if(password[i]>='A' && password[i]<='Z') res += 2;
                else if(password[i]>='0' && password[i]<='9') res +=3;
                else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$') res +=5;
            }
        }
        return res;
    }
};