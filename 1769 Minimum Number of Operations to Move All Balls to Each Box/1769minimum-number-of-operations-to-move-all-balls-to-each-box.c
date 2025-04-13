/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
 int n = strlen(boxes),k=0;
 *returnSize = n;
 int *ptr = (int *)malloc(n*sizeof(int));
 for(int i=0;boxes[i]!='\0';i++){
    int ans = 0;
    for(int j=0;boxes[j]!='\0';j++){
        if(boxes[j]=='1'){
            ans = ans+abs(i-j);
        }
    }
    ptr[k++] = ans;
 }
 return ptr;
}