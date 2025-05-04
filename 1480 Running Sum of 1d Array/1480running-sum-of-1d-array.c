/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* n, int s, int* rs) {
        *rs = s;
        int *res = (int *) malloc(s*sizeof(int));
        for( int i=0;i<s;i++){
            int k =i;
             int sum=n[0];
            while(k){
                sum+=n[k];
                k--;
            }
            res[i]=sum;
        }
         res[0] = n[0];
    return res;
}