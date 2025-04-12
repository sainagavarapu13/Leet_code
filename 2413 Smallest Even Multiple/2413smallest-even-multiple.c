int smallestEvenMultiple(int n) {
    int mul;
    if( n%2==0){
        mul = n;
    }else{
        mul = n*2;
    }
    return mul;
}