int differenceOfSum(int* nums, int numsSize) {
    int nsum = 0,dsum =0;
    for(int i=0;i<numsSize;i++){
        nsum = nsum + nums[i];
        int n = nums[i];
        while(n){
            int c = n%10;
            dsum = dsum +c;
            n /=10;
        }
    }
    return abs(nsum-dsum);
}