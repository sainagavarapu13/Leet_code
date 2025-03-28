int minimumChairs(char* s) {
    int b=0,i=0,maxi=0;
    while(s[i]!='\0'){
        if(s[i]=='E')
        {
            b++;
            if(b>maxi) maxi=b;
        }
        else if (s[i]=='L') b--;
        i++;
    }
    return maxi;
}