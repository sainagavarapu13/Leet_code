int  stack[200];
int top=-1;

void push(int val){
if(top!=199){
top++;
	stack[top]=val;
}

}
void pop(){
if(top!=-1){
	top--;
}
}

char* clearDigits(char* a) {
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='a'&&a[i]<='z'){
            push(a[i]);
        }
        else{
            pop();
        }
    }
    static char ans[200];
    int k=0;
    while(top!=-1){
        ans[k++]=stack[top];
        pop();
    }
    ans[k]='\0';
    int len=0;
    k=0;
    for (k = 0; ans[k] != '\0'; k++) {
        len++;
    }

    // Reverse the string using index manipulation
    for (k = 0; k < len / 2; k++) {
        char temp = ans[k];
        ans[k] = ans[len - k - 1];
        ans[len - k - 1] = temp;
    }
    return ans;
}