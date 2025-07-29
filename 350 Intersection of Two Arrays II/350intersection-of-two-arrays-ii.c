/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int min(int a,int b){
    if(a>b) return b;
    else return a;
 }
int* intersect(int* a, int n, int* b, int m, int* returnSize) {
    int f1[1001]={0};
    int f2[1001]={0};
    int i;
    for(i=0;i<n;i++){
        f1[a[i]]++;
    }
    for(i=0;i<m;i++){
        f2[b[i]]++;
    }
    int *ans=(int*)malloc(1001*sizeof(int));
    int req=0;
    for(i=0;i<1001;i++){
        if(f1[i]!=f2[i]){
           int  k=min(f1[i],f2[i]);
          // printf("%d %d\n",f1[i],f2[i]);
           while(k--){
            ans[req++]=i;
           }
        }
        else {
            int k=f1[i];
            while(k--){
                ans[req++]=i;
            }
        }
    }
  * returnSize=req;
    return ans;
}