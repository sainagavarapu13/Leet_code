int minSteps(char* s, char* t) {
    int fs[26]={0};
    int ft[26]={0};
    int i;
    for(i=0;s[i]!='\0';i++){
        fs[s[i]-'a']++;
        ft[t[i]-'a']++;
    }
    int ans[26]={0};
    int k=0,sum=0;
    for(i=0;i<26;i++){
        ans[k++]=fs[i]-ft[i];
    }
    for(i=0;i<26;i++){
        if(ans[i]>=0){
            sum+=ans[i];
        }
    }
    return sum;
}