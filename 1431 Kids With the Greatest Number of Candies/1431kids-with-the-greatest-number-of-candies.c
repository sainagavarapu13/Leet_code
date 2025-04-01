/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max= candies[0];
    for(int i=0;i<candiesSize;i++){
        if(max<candies[i]) max = candies[i];
    }
    *returnSize = candiesSize;
    bool *ptr = (bool *)malloc(candiesSize*sizeof(bool));
    for(int i=0;i<candiesSize;i++){
        if(candies[i]+extraCandies>=max) ptr[i] = true;
        else ptr[i] = false;
    }
    return ptr;
}