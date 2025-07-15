/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* a, int n, int k, int* returnSize) {
    int i,j;
    int *res=(int*)malloc(2*sizeof(int));
    int sum;
    * returnSize=2;
    int left=0,right=n-1;
    while(left<right){
       sum=a[left]+a[right];
       if(sum==k){
        res[0]=left+1;
        res[1]=right+1;
        break;
       }
       else if(k<sum) {
        right--;
       }
       else left++;

    }
    return res;
}