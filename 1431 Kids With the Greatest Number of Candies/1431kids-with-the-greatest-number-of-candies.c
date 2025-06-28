/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int max(int a[],int n){
    int max=-1;
    int i;
    for(i=0;i<n;i++){
        if(a[i]>=max)
        max=a[i];
    }
    return max;
 }
bool* kidsWithCandies(int* a, int n, int k, int* returnSize) {
    bool *res=(bool*)malloc(n*sizeof(bool));
    * returnSize=n;
    int i,p,an=0;
    for(i=0;i<n;i++){
       a[i]=a[i]+k;
        p=a[i];
        if(p==max(a,n)){
            res[an++]=1;
        }
        else res[an++]=0;
        a[i]=a[i]-k;
    }
    return res;
}