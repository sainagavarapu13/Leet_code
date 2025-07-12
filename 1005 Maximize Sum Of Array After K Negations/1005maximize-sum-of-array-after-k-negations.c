int largestSumAfterKNegations(int* a, int x, int k) {
    int sum=0;
    while(k--){
        int  min = 101;
        int ind;
     
        for( int i=0;i<x;i++){
            
            if( min > a[i]){min = a[i];
                ind =i;
            }
        }
        a[ind]= -min;
    }
    for( int i=0;i<x;i++) sum+=a[i];
    return sum;

}