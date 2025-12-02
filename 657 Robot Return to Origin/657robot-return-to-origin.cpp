class Solution {
public:
    bool judgeCircle(string m) {
        int a = 0,b=0,c=0,d=0;
        for(int i=0;i<m.size();i++){
            if(m[i]=='U') a++;
            else if(m[i]=='D') c++;
            else if(m[i]=='L') d++;
            else b++;
        }
        if(a==c && b==d){
            return 1;
        }
        else{
            return 0;
        }
    }
};