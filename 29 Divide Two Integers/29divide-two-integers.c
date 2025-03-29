    int divide(int dividend, int divisor) {
        int min=-2147483648 ;
        int max=2147483647 ;
    if(dividend==min&&divisor==-1) {
        return max;
    }
    else return dividend/divisor;
}