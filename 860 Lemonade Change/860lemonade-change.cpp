class Solution {
public:
    bool lemonadeChange(vector<int>& a) {
        vector<int>c(3,0);
        for( int i : a){
            if( i==5) c[0]++;
            else if( i == 10){
                if( c[0]==0) return 0;
                c[1]++;
                c[0]--;
            }else{
                if( c[1] >=1 && c[0]>=1){
                    c[2]++;
                    c[0]--;
                    c[1]--;
                }else if( c[0]>=3) c[0]-=3;
                else return 0;
            }
        }
        return 1;
    }
};