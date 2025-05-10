int numberOfEmployeesWhoMetTarget(int* a, int n, int k) {
    int cnt=0,i;
    for(i=0;i<n;i++){
        if(a[i]>=k){
            cnt++;
        }
    }
    return cnt;
}