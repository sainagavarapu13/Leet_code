class Solution {
public:
    int passThePillow(int n, int time) {
        int a = 1,b=0;
        for(int i=0;i<time;i++){
            if(a==n){
                b = 1;
            }
            if(a==1){
                b =0;
            }
            if(b==0){
                a++;
            }
            else{
                a--;
            }
        }
        return a;
    }
};