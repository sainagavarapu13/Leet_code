/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int rev(int n){
    int m=n,len=0,cnt=0;
    while(m){
        len++;
        int k=m%10;
       if(k!=0) {if(n%k==0){
            cnt++;
        }}
        m=m/10;
    }
    if(cnt==len) return 1;
    else return 0;
 }
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int *result =(int*)malloc((right-left+1)*sizeof(int));
   
    int i,p=0;
    for(i=left;i<=right;i++){
    	if(rev(i)){
    		result[p++]=i;
		}
	}
    *returnSize=p;
	return result;
}