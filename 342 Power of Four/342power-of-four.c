bool isPowerOfFour(int n) {
    int k=n%10;
    if(n==1||n==4) return 1;
    else{ 
    if(k==4||k==6){
        while(n/10>0&&n%4==0){
            n=n/4;
        }
        if(n==1||n==4) return 1;
        else return 0;
    }else return 0;
}}