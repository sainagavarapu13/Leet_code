class Solution {
public:
    int largestInteger(int n, int s) {
        if(n*9<s) return -1;
        if( s==0) return 0;
        string b ="";
        int temp =s;
        int sum=0;
        for( int i=0;i<n;i++){
           int d = min(9,s);
           sum+=d;
            b+=(d+'0');
            s-=d;
        }
        if( sum !=temp) return -1;
        return stoi(b);
    }

};
