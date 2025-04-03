int evalRPN(char** tokens, int tokensSize) {
    long long stack[100000];
    long long top = -1;
    for(int i=0;i<tokensSize;i++){
        if(strcmp(tokens[i],"+")!=0 && strcmp(tokens[i],"-")!=0 && strcmp(tokens[i],"*")!=0 && strcmp(tokens[i],"/") != 0){
            stack[++top] = atoi(tokens[i]);
        }
        else{
            long long op2 = stack[top--];
            long long op1 = stack[top--];
            long long res;
            if(strcmp(tokens[i], "+") ==0) res = op1 + op2;
            else if(strcmp(tokens[i], "-") ==0 ) res = op1 - op2;
            else if(strcmp(tokens[i], "*") ==0 ) res = op1 * op2;
            else res = op1 / op2;
            stack[++top] = res;
        }
    }
    return stack[top];
}