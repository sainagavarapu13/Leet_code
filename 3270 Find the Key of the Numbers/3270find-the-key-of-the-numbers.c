int generateKey(int num1, int num2, int num3) {
    int a=1000,b=0;
    while(a){
        int c = num1/a;
        int d = num2/a;
        int e = num3/a;
        int f = c<d ? (c<e ? c : e) : (d<e ? d : e);
        b = b*10 + f;
        num1 = num1%a;
        num2 = num2%a;
        num3 = num3%a;
        a= a/10;
    }
    return b;
}