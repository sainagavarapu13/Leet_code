int subsetXORSum(int* a, int x) {
     int sum=0;
     int subsets = 1 << x;
     for( int i=0;i<subsets;i++){
        int xor =0;
        for(int j=0;j<x;j++){
            if( i &(1<<j)){
                xor^=a[j];
            }
        }
        sum+=xor;
     }
     return sum;
}