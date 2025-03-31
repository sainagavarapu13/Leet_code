int countDigits(int num) {
    int b = num,cnt=0;
    while(b){
        int c = b%10;
        if(num%c==0) cnt++;
        b /=10;
    }
    return cnt;
}