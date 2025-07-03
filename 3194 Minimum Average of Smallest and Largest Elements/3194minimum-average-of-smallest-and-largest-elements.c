double minimumAverage(int* a, int n) {
    double *res=(double*)malloc((n/2)*sizeof(double));
    int xi,ni;
    float min,max;
    int i,k=0;
    for(int j=0;j<n/2;j++){
         max=-1,min=9876;
        for(i=0;i<n;i++){
            if (a[i] == -1) continue;
        if(a[i]>max){
            max=a[i];
            xi=i;
        }
        if(a[i]<min){
            min=a[i];
            ni=i;
        }
    }
    res[k++]=(max+min)/2;
    a[xi]=-1;
    a[ni]=-1;
    }
    double small=98765;
    for(i=0;i<n/2;i++){
        if(res[i]<small){
            small=res[i];
        }
    }
    return small;
}