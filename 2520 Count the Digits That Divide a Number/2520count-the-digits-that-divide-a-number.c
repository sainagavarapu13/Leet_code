int countDigits(int num) {
     int x = num;
     int dig=0;
     while( x){
        int rem = x%10;
        if( num%rem ==0){
            dig++;
        }
        x/=10;
     }
     return dig;
}