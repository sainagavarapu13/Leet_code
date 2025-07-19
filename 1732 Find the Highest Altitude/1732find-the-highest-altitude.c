int largestAltitude(int* gain, int gainSize) {
    int A[gainSize+1];
    int a=0,max = 0,i,b=0;
    A[b++] = 0;
    for(i=0;i<gainSize;i++){
        a += gain[i];
        A[b++] = a;
        if(max<A[b-1]) max = A[b-1];
    }
    return max;
}