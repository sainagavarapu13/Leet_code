

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* a, int numsSize, int n, int* returnSize){
int *b=(int*)malloc(2*n*sizeof(int));
*returnSize=2*n;
int i,p=0;
for(i=0;i<n;i++){
   b[p]=a[i];
   p=p+2;
}

p=1;
for(i=n;i<2*n;i++){
   b[p]=a[i];
   p=p+2;
}
return b;
}