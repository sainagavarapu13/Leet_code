bool checkIfExist(int* a, int n) {
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]==2*a[j])||(2*a[i]==a[j])){
                return 1;
            }
        }
    }
    return 0;
}