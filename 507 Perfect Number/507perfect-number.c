bool checkPerfectNumber(int num) {
    int b = 1;
    if(num==1) return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) {
            b +=i;
        if(i*i!=num) b +=num/i;
        }
    }
    if(b==num) return true;
    else return false;
}