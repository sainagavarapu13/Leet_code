int change(int i){
    int count = 0;
    while(i>0) {
        if(i%2==1) count++;
        i=i/2;
    }
    return count;
}
int sumIndicesWithKSetBits(int* nums, int size, int k) {
    int sum=0;
    for(int i=0;i<size;i++){
        int bit = change(i);
        if(bit==k) sum+=nums[i];
    }
    return sum;
}