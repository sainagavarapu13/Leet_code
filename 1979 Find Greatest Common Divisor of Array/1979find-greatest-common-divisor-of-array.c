int gcd(int a,int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int findGCD(int* a, int n) {
    int max=-1,min=987654321;
    int i;
    for(i=0;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    int ans=gcd(max,min);
    return ans;
}