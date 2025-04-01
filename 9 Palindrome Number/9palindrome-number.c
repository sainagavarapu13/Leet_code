bool isPalindrome(int x) {
    if( x<=-1) return 0;
    int temp = x;
    long long rev=0;
    while(temp){
        int rem = temp%10;
        rev= rev*10+rem;
        temp = temp/10;
    }
    
    if(  x== rev) return 1;
    else return 0;

    
}