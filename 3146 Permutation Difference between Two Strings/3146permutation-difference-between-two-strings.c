int findPermutationDifference(char* s, char* t) {
    int sum=0;
    int i,j;
    for(i=0;s[i]!='\0';i++){
        for(j=0;t[j]!='\0';j++){
            if(s[i]==t[j]){
                sum+=abs(i-j);
            }
        }
    }
    return sum;
}