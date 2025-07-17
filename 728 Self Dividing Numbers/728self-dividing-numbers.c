/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* ptr = (int*)malloc(10002*sizeof(int));
    int i,k=0;
    for(i=left;i<=right;i++){
        int b = i,c=0;
        if(i<=9){
            ptr[k++] = i;
            continue;
        }
        while(b>1){
            int a = b%10;
            if(a==0) {
                c=0;
                break;
            }
            if(i%a==0) c = 1;
            else {
                c = 0;
                break;
            }
            b = b/10;
        }
        if(c==1) ptr[k++] = i;
    }
    *returnSize = k;
    return ptr;
}