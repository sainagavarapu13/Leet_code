int arrangeCoins(int n) {
   unsigned int sum=0,ans;
    for(int i=1;i<=n;i++){
        sum+=i;
        if(sum>n){
           ans=i-1;
           break;
        }
        else if(sum==n){
            ans=i;
        }
    }
    return ans;
}