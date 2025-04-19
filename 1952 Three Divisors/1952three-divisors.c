bool isThree(int n) {
    int i,cnt=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==3) return 1;
    else return 0;
}