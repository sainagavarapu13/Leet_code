/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** ch, int wordsSize, char x, int* returnSize) {
    int *ptr = (int*)malloc(wordsSize*sizeof(int));
    int k=0;
    for(int i=0;i<wordsSize;i++){
        for(int j=0;ch[i][j]!='\0';j++){
            if(ch[i][j]==x){
                ptr[k++] = i;
                break;
            }
        }
    }
    *returnSize = k;
    return ptr;
}