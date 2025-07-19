int countCompleteDayPairs(int* hours, int h) {
    int a=0;
    for(int i=0;i<h;i++){
        int b = hours[i];
        for(int j=i+1;j<h;j++){
        if((b+hours[j])%24==0) a++;
        }
    }
    return a;
}