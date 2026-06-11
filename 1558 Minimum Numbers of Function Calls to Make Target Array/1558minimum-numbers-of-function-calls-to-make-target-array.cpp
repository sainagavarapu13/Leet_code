class Solution {
public:
        int fun(int n){
            int power = 0;

    while (n > 1) {
        n /= 2;
        power++;
    }
    return power;
        }
    int minOperations(vector<int>& a) {
        int m =0;
        int total=0;
        int increments=0;
        for( int i : a){
           increments += __builtin_popcount(i);
            m = max( fun(i),m);
        }
        return increments+m;
              
    }
};