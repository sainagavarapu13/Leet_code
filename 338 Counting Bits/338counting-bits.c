/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int set(int n){
    int cnt=0;
    while(n){
        if(n%2==1)
        cnt++;
        n=n/2;
    }
    return cnt;
 }
int* countBits(int n, int* returnSize) {
    int i;
    int *res=(int*)malloc((n+1)*sizeof(int));
    * returnSize=n+1;
    int p=0;
    for(i=0;i<=n;i++){
        int ans=set(i);
        res[p++]=ans;
    }
    return res;
}