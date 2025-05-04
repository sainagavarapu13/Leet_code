/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** w, int s, char x, int* rs) {
    int cnt=0,k=0;
    int * res = ( int *)malloc((s)*sizeof(int));
    for( int i=0;i<s;i++){
        for( int j=0;w[i][j]!='\0';j++)
        if( w[i][j]== x ){ 
            res[k++]=i;
        break;
        }
    }
    *rs =k;
    return res;
}