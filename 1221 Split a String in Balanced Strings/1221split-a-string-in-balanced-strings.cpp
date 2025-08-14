class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt =0, sum=0;
        for( char i:s){
            if( i == 'R') cnt++;
            else cnt--;
            if( cnt ==0) sum++;

        }
        return sum;
        
    }
};