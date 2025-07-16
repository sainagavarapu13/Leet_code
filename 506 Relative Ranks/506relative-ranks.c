/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int maxi(int a[],int n){
    int i,max=-1,idx;
    for(i=0;i<n;i++){
        if(a[i]>max)
        {
            max=a[i];
            idx=i;
        }
    }
    a[idx]=-1;
    return idx;
 }
char** findRelativeRanks(int* a, int n, int* returnSize) {
    char** s = (char**)malloc(n * sizeof(char*));

    int cnt=0;
     *returnSize = n;
    for(int i=0;i<n;i++){
        int idx=maxi(a,n);
         s[idx] = (char*)malloc(20 * sizeof(char));
        cnt++;
        if (cnt == 1) {
            strcpy(s[idx], "Gold Medal");
        } else if (cnt == 2) {
            strcpy(s[idx], "Silver Medal");
        } else if (cnt == 3) {
            strcpy(s[idx], "Bronze Medal");
        } else {
            sprintf(s[idx], "%d", cnt);
        }
    }
    return s;
}