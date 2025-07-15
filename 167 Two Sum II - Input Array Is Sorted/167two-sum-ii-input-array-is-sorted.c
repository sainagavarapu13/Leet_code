/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* num, int n, int target, int* returnSize) {
    *returnSize = 2;
    int *ptr = (int*)malloc(2*sizeof(int));
    int i=0,j=n-1,c=0;
    while(1){
        if(num[i]+num[j]==target){
            ptr[0] = i+1;
            ptr[1] = j+1;
            break;
        }
        else if(num[i]+num[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    return ptr;
}