int ispre(int a[],int n,int k){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==k)
        return 1;
    }
    return 0;
}
int findFinalValue(int* a, int n, int k) {
    int i;
    while(ispre(a,n,k)){
        k=k*2;
    }
    return k;
}