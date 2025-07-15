double minimumAverage(int* nums, int numsSize) {
    double min=100000000;
    for(int i =0; i <numsSize; i ++){
        for(int j =0; j < numsSize-1; j++){
            if(nums[j] > nums[ j+1]){
                int temp = nums[ j];
                nums[ j] = nums[ j+1];
                nums[ j+1]= temp;
            }
        }
    }
    for( int i=0, j= numsSize-1;i < numsSize, j>=0; i++, j--){
        float average  = (nums[ i]+nums[j])/2.0;
        if( average < min){
            min = average;
        }
    }
    return min;

}