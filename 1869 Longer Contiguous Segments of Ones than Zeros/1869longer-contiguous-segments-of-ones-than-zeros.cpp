class Solution {
public:
    bool checkZeroOnes(string s) {
        int zero=0,one=0,max1 = INT_MIN , max0 = INT_MIN;
        for( char i : s){
            if( i == '1'){
                one++;
                zero=0;
            }else{
                zero++;
                one =0;
            }
            max1 = max( max1 , one);
            max0 = max( max0 , zero);
        }
        max1 = max( max1 , one);
         max0 = max( max0 , zero);
        if( max1 > max0) return 1;
        else return 0;
        
    }
};