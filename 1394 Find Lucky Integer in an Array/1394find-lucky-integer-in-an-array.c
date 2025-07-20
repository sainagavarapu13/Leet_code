int findLucky(int* a, int n) {
    int i,f[501];
    for(i=0;i<n;i++){
        f[a[i]]++;
    }
    for(i=500;i>=1;i--){
        if(i==f[i]){
            return i;
            break;
        }
    }
    return -1;
}