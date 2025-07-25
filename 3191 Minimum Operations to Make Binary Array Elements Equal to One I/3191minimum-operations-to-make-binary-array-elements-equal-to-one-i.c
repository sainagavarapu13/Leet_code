int isone(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==0) return 0;
    }
    return 1;
}
void flip(int a[],int s,int b){
    int i;
    a[s]=1-a[s];
    a[s+1]=1-a[s+1];
    a[b]=1-a[b];
}
int minOperations(int* a, int n) {
    int start=0,i,cnt=0;
    while(start<=n-3){
       
        if(a[start]==0){
            flip(a,start,start+2);
            cnt++;
        }
        start++;
    }
    if(a[n-1]==1&&a[n-2]==1) return cnt;
    else return -1;
}