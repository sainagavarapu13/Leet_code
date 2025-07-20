int mini(int a,int b,int c){
    if(a<=b&&a<=c) return a;

    else if(b<=a&&b<=c) return b;
    else return c;
}
int rev(int a[]){
   int b=0,i;
   for(i=3;i>=0;i--){
    b=b*10+a[i];
   }
   return b;
}
int generateKey(int a, int b, int c) {
    int ans=0;
    int f[4]={0};
    int y=0;
    while(a!=0||b!=0||c!=0){
        int n1,n2,n3;
        if(a==0||b==0||c==0){
            if(a==0) n1=0;
            if(b==0) n2=0;
            if(c==0) n3=0;
        }
        else{
         n1=a%10;
         n2=b%10;
         n3=c%10;
        }
        int min=mini(n1,n2,n3);
         f[y++]=min;
         a=a/10;
         b=b/10;
         c=c/10;
    }
    int fin=rev(f);
    return fin;
}