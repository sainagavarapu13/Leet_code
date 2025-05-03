char findTheDifference(char* s, char* t) {
    int f[26]={0};
    char ans;
    for(int i=0;s[i]!='\0';i++){
       if(s[i]>='a'&&s[i]<='z') f[s[i]-'a']++;
    }
    for(int i=0;t[i]!='\0';i++){
       if(t[i]>='a'&&t[i]<='z') f[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
       if(f[i]%2!=0){
         ans=i+97;
        break;
       }
    }
    return ans;
}