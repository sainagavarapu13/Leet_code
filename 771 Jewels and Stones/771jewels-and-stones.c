int numJewelsInStones(char* j, char* s) {
    int f[123],sum=0 ;
    memset(f,0,123);
     for( int i=0;s[i]!='\0';i++){
        f[s[i]-'0']++;
        
    }
    for(int i=0;j[i]!='\0';i++){
        sum+=f[j[i]-'0'];
        
    }
   
    
    
    return sum;
    
}