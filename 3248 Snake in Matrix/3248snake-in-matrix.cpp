class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& a) {
        int h=0,v=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=="RIGHT"){
                h++;
            }
            else if(a[i]=="LEFT"){
                h--;
            }
            else if(a[i]=="UP"){
                v++;
            }
            else v--;
        }
        if(v==0&&h==0) return 0;
        long long k=0;
        while(h>0){
            k++;
            h--;
        }
        h=h*(-1);
        while(h>0){
            k--;
            h--;
        }
        while(v<0){
            k=k+n;
            v++;
        }
        v=v*(-1);
        while(v<0){
            k=k-n;
            v++;
        }
        return k;
    }
};