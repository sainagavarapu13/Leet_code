int sum(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int minElement(int* a, int x) {
    for( int i=0;i<x;i++){
        int k = sum(a[i]);
        a[i]= k;
    }
    int min = a[0];
    for( int i=1;i<x;i++){
            if(min>a[i]) min = a[i];
    }
    return min;
}