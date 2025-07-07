int sumOddLengthSubarrays(int* a, int x) {
    int sum=0;
    for( int i=0;i<x;i++){
       int cnt=0;
        for( int j=i;j<x;j++){
            cnt+=a[j];
            int len = j-i+1;
            if( len%2!=0){
                    sum+=cnt;
            }
        }
    }
    return sum;
}