int digit(int n){
    int sum=0;
    while(n){
        int k=n%10;
        sum+=k;
        n=n/10;
    }
    return sum;
}
int differenceOfSum(int* a, int n) {
    int ele=0,digi=0;
    for(int i=0;i<n;i++){
        ele+=a[i];
    }
    for(int i=0;i<n;i++){
        digi+=digit(a[i]);
    }
   if(ele>digi) return ele-digi;
   else return digi-ele;
}