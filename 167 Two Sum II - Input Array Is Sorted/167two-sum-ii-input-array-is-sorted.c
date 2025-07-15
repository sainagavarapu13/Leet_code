/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* a, int x, int t, int* res) {
    * res =2;
    int*rs = (int *) malloc(2*sizeof( int));
    int l =0;
    int r = x-1;
    while(l<r){
        int sum=a[l]+a[r];
        if( sum== t){
            rs[0]=l+1;
            rs[1]=r+1;
            return rs;
        }else if( sum<t) l++;
        else r--;
    }
     return rs;
}