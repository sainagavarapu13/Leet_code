int countLargestGroup(int n) {
    int f[46]={0};
    long long sum,i;
    for(i=1;i<=n;i++){
        sum=0;
        int temp=i;
        while(temp){
        int k=temp%10;
        sum+=k;
        temp=temp/10;
    }
    f[sum]++;
    }int max=f[0];
    for(i=1;i<46;i++){
        if(f[i]>max){
            max=f[i];
        }
    }
    int count = 0;
    for (i = 0; i < 46; i++) {
        if (f[i] == max) {
            count++;
        }
    }

    return count;
  
}