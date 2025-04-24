bool canAliceWin(int* a, int ns) {
    int sum1=0,sum2=0;
    for( int i=0;i<ns;i++){
        if( (int)log10(a[i])+1 >1) sum2+=a[i];
        else sum1+=a[i];
    }
    if( sum1 != sum2) return 1;
    else return 0;
}