int titleToNumber(char* c) {
   long long a=0,b=strlen(c),i;
   b--;
   int d = 0;
   for(i=b;i>=0;i--){
    a = a+ pow(26,d) * (c[i]-'A'+1);
    d++;
   }
   return a;
}