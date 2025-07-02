int  stack[300];
int top;
void push(int val){
if(top!=299){
	top++;
	stack[top]=val;
}

}
void pop(){
if(top!=-1){
top--;
}

}

char* reversePrefix(char* a, char ch) {
    top=-1;
    int i=0;
    while(a[i]!='\0'&&a[i]!=ch){
        push(a[i]);
        i++;
    }
   if (a[i] == ch) {
        push(a[i]);
        i++;  // Include ch and move past it
    } else {
        // ch not found: return original string
        return a;
    }
    static char ans[300];
int j=0;
   while(top!=-1){
    ans[j++]=stack[top];
   
    pop();
   }
   while(a[i] != '\0') {
        ans[j++] = a[i++];
    }
   ans[j]='\0';
   
   	
return ans;
   
}