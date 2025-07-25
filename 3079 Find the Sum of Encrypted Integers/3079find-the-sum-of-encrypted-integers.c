int sumOfEncryptedInt(int* nums, int numsSize) {
    int a =0;
    for(int i=0;i<numsSize;i++){
        int m=0,l=0;
        while(nums[i]){
            m = fmax(nums[i]%10,m);
            nums[i]/=10;
            l++;
        }
        a += (pow(10,l)-1)/9*m;
    }
    return a;
}