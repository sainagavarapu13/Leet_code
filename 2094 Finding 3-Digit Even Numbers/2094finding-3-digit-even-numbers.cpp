class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        vector<int>f(10,0),res;
        for( int i : d) f[i]++;
        for( int i=100;i<1000;i+=2){
            int a=i/100 , b = (i/10)%10 , c = i%10;
            vector<int>n(10,0);
            n[a]++;
            n[b]++;
            n[c]++;
              int flg =1;
            for( int j=0;j<10;j++){
                if( n[j]>f[j]){
                    flg =0;
                    break;
                }
            }
            if( flg==1) res.push_back(i);
        }
        return res;
    }
};