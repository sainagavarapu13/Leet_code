int countPairs(int* nums, int x, int k) {
    int cnt =0;
    for( int i=0;i<x-1;i++){
        for( int j=i+1;j<x;j++){
            if( nums[i]== nums[j]){
                if( (i*j)%k ==0){
                    cnt++;
                }
            }
        }
    }
    return cnt;
}