int singleNumber(int* nums, int numsSize) {
    int cnt =nums[numsSize-1],sum=0;
    for( int i=0;i<numsSize-1;i++){
                    cnt+=nums[i];
        for(int j =i+1;j<numsSize;j++){
                if( nums[i]==nums[j]){
                        sum+=2*nums[i];
                }
               
                
        }
    }
    return cnt-sum;
}