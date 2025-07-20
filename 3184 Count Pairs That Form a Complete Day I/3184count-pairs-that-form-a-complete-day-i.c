int countCompleteDayPairs(int* h, int x) {
    int sum=0,cnt=0;
    for( int i=0;i<x;i++){
        for( int j= i+1;j<x;j++){
             sum=0;
        sum =h[i]+h[j];
         if( sum%24==0)cnt++;
        }
    
    }

    return cnt;
}