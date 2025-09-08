class Solution {
public:
    int splitNum(int num) {
        vector<int>a;
        while( num){
            a.push_back(num%10);
            num/=10;
        }
        sort( a.begin(), a.end());
        int len = a.size();
        int x=0 , y=0;
        for( int i=0;i<a.size();i++){
            if( i%2==0){
                x = x*10+a[i];
            }else{
                y = y*10 + a[i];
            }
        }
        return x+y;
    }
};