int findDuplicate(int* a, int n) {
    int f[100001]={0};
    int i;
    for(i=0;i<n;i++){
        f[a[i]]++;
    }
    for(i=0;i<100001;i++){
        if(f[i]>=2){
            return i;
            break;
        }
    }
    return -1;
}