int numJewelsInStones(char* a, char* b) {
    int i,cnt=0,j;
    for(i=0;a[i]!='\0';i++){
        for(j=0;b[j]!='\0';j++){
            if(a[i]==b[j]){
                cnt++;
            }
        }
    }
    return cnt;
}