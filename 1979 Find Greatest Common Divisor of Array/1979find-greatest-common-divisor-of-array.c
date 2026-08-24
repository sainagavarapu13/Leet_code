int findGCD(int* nums, int numsSize) {
    int max =-1, min = 10001;
    for( int i=0;i<numsSize;i++){
        if( max< nums[i]) max = nums[i];
        if( min > nums[i]) min = nums[i];
    }
    while(  max){
        int temp = max;
       max  =  min %max;
        min = temp;
    }
    return min;
}