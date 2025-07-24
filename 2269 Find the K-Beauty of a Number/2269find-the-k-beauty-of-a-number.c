int dig(int n){
    int cnt=0;
    while(n){
        int k=n%10;
        cnt++;
        n=n/10;
    }
    return cnt;
}
int isnum(int arr[],int a,int b) {
    int i,l=0;
    for(i=a;i<=b;i++){
        l=l*10+arr[i];
    }
    return l;
}
int divisorSubstrings(int n, int k) {
  
    int len=dig(n);
    int a[len];
    int m=n;
    for(int i=len-1;i>=0;i--){
        a[i]=n%10;
        n=n/10;
    }
    int s=0,cnt=0;
    int e=k-1;
    while(e<len){
        int num=isnum(a,s,e);
        printf("%d ",num);
        if(num!=0&&m%num==0){
            cnt++;
        }
        s++;
        e++;
    }
    return cnt;
}