class Solution {
public:
    int minFlips(string a) {
        int i,flip=0;
        for(i=0;i<a.size();i++){
            if(flip%2!=0) {
                if(a[i]=='0') a[i]='1';
                else{
                    a[i]='0';
                }
            }
            if(a[i]=='1'){
                flip++;
            }
        }
        return flip;
    }
};