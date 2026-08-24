int trailingZeroes(int n) {
    int flage =1,cnt=0,k=1;
    while(flage){
         int l = pow(5,k);
            int res =n/l;
            cnt+=res;
            if( res==0){
                flage=0;
                break;
            }
        
        k++;
    }
    return cnt;
}