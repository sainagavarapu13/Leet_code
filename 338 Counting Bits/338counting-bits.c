/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int fun( int a){
    int cnt=0;
    while(a){
        if( a%2 ==1) cnt++;
        a/=2;
    }
    return cnt;
 }
int* countBits(int n, int* returnSize) {
    * returnSize = n+1;
    int *res = (int*)malloc((n+1)*sizeof(int));
    for( int i=0;i<=n;i++){
        res[i]=fun(i);
    }
    return res;
}