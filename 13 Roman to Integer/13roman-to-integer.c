int value(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int romanToInt(char* a) {
    int i;
    int sum=0;
    int len=strlen(a);
    for(i=len-1;i>=0;i--){
        if(a[i]=='I'){
            if(i!=len-1&&value(a[i+1])>value(a[i])){
                sum+=0-1;
            }
            else{
                sum+=1;
            }
        }
         if(a[i]=='V'){
            if(i!=len-1&&value(a[i+1])>value(a[i])){
                sum+=0-5;
            }
            else{
                sum+=5;
            }
        }
         if(a[i]=='X'){
           if(i!=len-1&&value(a[i+1])>value(a[i])){
                sum+=0-10;
            }
            else{
                sum+=10;
            }
        }
        if(a[i]=='L'){
          if(i!=len-1&&value(a[i+1])>value(a[i])){
                sum+=0-50;
            }
            else{
                sum+=50;
            }
        }
        if(a[i]=='C'){
          if(i!=len-1&&value(a[i+1])>value(a[i])){
                sum+=0-100;
            }
            else{
                sum+=100;
            }
        }
        if(a[i]=='D'){
          if(i!=len-1&&value(a[i+1])>value(a[i])){
                sum+=0-500;
            }
            else{
                sum+=500;
            }
        }
        if(a[i]=='M'){
            if(i!=len-1&&value(a[i+1])>value(a[i])){
                sum+=0-1000;
            }
            else{
                sum+=1000;
            }
        }
    }
    return sum;
}
