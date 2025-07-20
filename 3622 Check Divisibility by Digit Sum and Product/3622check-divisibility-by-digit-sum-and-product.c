bool checkDivisibility(int n) {
    if(n==0) return 0;
    int m=n;
    int i,s=0,p=1;
    while(n!=0){
        int k=n%10;
        p=p*k;
        s+=k;
        n=n/10;
    }
    
    int ans=p+s;
   
    if(m%ans==0) return 1;
    else return 0;
}