bool areOccurrencesEqual(char* s) {
    int fre[26] = {0};
    int i=0,k=0;
    while(s[i]!='\0'){
        int j = i+1;
        if(s[i]=='0') {
            i++;
            continue;
        }
        if(s[i]!='0') fre[k]++;
        while(s[j]!='\0'){
            if(s[i]==s[j]){
                fre[k]++;
                s[j] = '0';
            }
            j++;
        }
        k++;
        i++;
    }
    k--;
    while(k>0){
        //printf("%d ",fre[k]);
        if(fre[k]!=fre[k-1]) return false;
        k--;
    }
    return true;
}