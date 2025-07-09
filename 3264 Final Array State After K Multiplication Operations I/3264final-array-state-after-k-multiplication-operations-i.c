/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int mini(int a[],int n){
    int i,min=987654,idx;
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            idx=i;
        }
    }
    return idx;
 }
int* getFinalState(int* a, int n, int k, int m, int* returnSize) {
    *returnSize=n;

   while(k--){
        int idx= mini(a,n);
        a[idx]=a[idx]*m;

    }
    return a;
}