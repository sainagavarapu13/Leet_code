int commonFactors(int a, int b) {
    int m;
    if(a>b){
        m=a;
    }
    else{
        m=b;
    }
    int i,cnt=0;
    for(i=1;i<=m;i++){
        if(a%i==0&&b%i==0){
            cnt++;
        }
    }
    return cnt;
}