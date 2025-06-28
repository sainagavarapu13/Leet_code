/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** a, int n, char ch, int* returnSize) {
    int i,j;
    int *res=(int*)malloc(n*sizeof(int));
    * returnSize=n;
    int k=0,p=0;
    for(i=0;i<n;i++){
        for(j=0;a[i][j]!='\0';j++){
            if(a[i][j]==ch){
                res[k++]=i;
                break;
            }
        }
    }
    * returnSize=k;
    return res;
}