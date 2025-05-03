int minMoves(int* a, int n) {
    int sum=0,max=a[0];
for(int i=0;i<n;i++){
    if(a[i]<max) max=a[i];
}
for(int i=0;i<n;i++){
    sum+=max-a[i];
}
return abs(sum);
}