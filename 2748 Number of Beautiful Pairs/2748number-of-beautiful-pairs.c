int gcd(int a,int b){
    while(a>9){
        a /=10;
    }
    b = b%10;
    int c = a>b ? b : a;
    for(int i=2;i<=c;i++){
        if(a%i==0 && b%i==0) return 0;
    }
    return 1;
}

int countBeautifulPairs(int* nums, int numsSize) {
    int d = 0;
    for(int i=0;i<numsSize-1;i++){
        int a = nums[i];
        for(int j=i+1;j<numsSize;j++){
            d = d + gcd(a,nums[j]);
        }
    }
    return d;
}