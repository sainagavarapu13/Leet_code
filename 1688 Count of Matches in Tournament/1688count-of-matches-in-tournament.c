
int numberOfMatches(int n){
     int max =0;
     while( n>1){
        if( n%2==0){
            max += n/2;
            n = n/2;
        }else{
            max += (n-1)/2;
            n = ((n-1)/2)+1;
        }
     }
 return max;
}