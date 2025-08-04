class Solution {
public:
    bool isTrionic(vector<int>& n) {
        int p=0;
        int len = n.size(),k=0;
        while( k<len-1 && n[k] < n[k+1]){
            p++;
            k++;
        }
        if( p==0 || p == len-1 )return 0;
        int q =p;
        while(k < len-1 &&  n[k] > n[k+1] ){
            q++;
            k++;
        }
        if( p==q || q== len-1) return 0;
        while( k < len-1  && n[k]< n[k+1]){
            q++;
            k++;
        }
        if( q == len-1 ) return 1;
        else return 0;
    }
};