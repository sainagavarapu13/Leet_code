/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* a, int n, int* returnSize) {
    int *b=(int*)malloc(n*sizeof(int));
    * returnSize=n;

    int ec=0,oc=0,i;
    for(i=0;i<n;i++){
        if(a[i]%2==0) ec++;
        else oc++;
    }
    
    int k=0;
    while(ec--){
        b[k++]=0;
    }
    while(oc--){
        b[k++]=1;
    }
    return b;
}