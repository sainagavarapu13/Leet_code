/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int check( int a){
    int t = a;
    while(t){
        int rem = t%10;
        if( rem ==0) return 0;
       else if( a % rem!=0){
         return 0;
        }
        t=t/10;
    } return 1;
    
 }
int* selfDividingNumbers(int l, int r, int* rs) {
    int *res = (int *) malloc( (r-l+1)*sizeof(int));
    int k =0;
    for( int i=l;i<=r;i++){
    if( check(i)==1) res[k++]=i;
    }
    *rs = k;
    return res;
    
}