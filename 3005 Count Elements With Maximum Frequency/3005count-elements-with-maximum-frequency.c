int maxFrequencyElements(int* a, int x) {
    int f[101]={0};
    int max =-1;
    for( int i=0;i<x;i++){f[a[i]]++;
         if( max < a[i]) max = a[i];}

        int cnt=-1; 
    for( int i=0;i<=max;i++){
        if( cnt <f[i]) cnt = f[i];
    }
    int sum=0;
    for( int i=0;i<=max;i++){
        if( cnt == f[i]) sum++;
    }
    sum = sum*cnt;
    return sum;
}