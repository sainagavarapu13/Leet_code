int numIdenticalPairs(int* a, int n) {
    int i,j,cnt=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cnt++;
            }
        }
    }
    return cnt;
}