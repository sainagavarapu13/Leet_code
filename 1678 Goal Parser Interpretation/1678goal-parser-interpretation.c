char * interpret(char * command){
    char *ch = (char *)malloc(101 * sizeof(char));
    int k = 0;
    for(int i = 0; command[i] != '\0';){
        if(command[i] == 'G'){
            ch[k++] = 'G';
            i++;
        }
        else if(command[i] == '(' && command[i+1] == ')'){
            ch[k++] = 'o';
            i += 2;
        }
        else if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')'){
            ch[k++] = 'a';
            ch[k++] = 'l';
            i += 4;
        }
    }
    ch[k] = '\0';
    return ch;
}
