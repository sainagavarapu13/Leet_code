/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* a, int* returnSize) {
    int i,sum,len=0;
    for(i=0;a[i]!='\0';i++){
        len++;
    }
    int *result = (int *)malloc(len*sizeof(int));
    * returnSize=len;
    for(i=0;i<len;i++){
        sum=0;
        for(int j=0;j<len;j++){
            if(a[j]=='1'){
                sum+=abs(j-i);
            }
        }
        result[i]=sum;
    }
    return result;
}