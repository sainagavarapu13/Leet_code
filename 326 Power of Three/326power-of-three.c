bool isPowerOfThree(int m) {
    int sum=0;
    int n=m;
     if(n==1||n==3||n==9) return 1;
     else{
    while(n!=0){
        int k=n%10;
        sum+=k;
        n=n/10;
    }
    n=m;
    if(sum%3==0){
         if(n==3||n==9) return 1;
         else{
    while(n/10){
        if(n%3==0){
          n=n/3;
         }
         else {
            return 0;
            break;
         }
}
    if(n==1||n==3||n==9) return 1;
    
    else return 0;
}}
else return 0;
}}