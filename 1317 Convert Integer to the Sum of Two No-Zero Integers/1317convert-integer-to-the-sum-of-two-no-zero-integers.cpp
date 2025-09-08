class Solution {
public:
    int zero(int n){
        while( n){
            if( n%10 ==0){
               return 1;
            }
             n/=10;
        }
        return 0;
    }
    vector<int> getNoZeroIntegers(int n) {
        n-=1;
        int k=1;
        while( zero(k) || zero(n)){
            k++;
            n--;
        }
        vector<int>a;
        a.push_back(k);
        a.push_back(n);
        return a;
    }
};