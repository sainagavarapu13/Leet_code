bool isPerfectSquare(int num) {
    double s = sqrt(num);
    int k = s;
    if( s-k ==0) return 1;
    else return 0;
}