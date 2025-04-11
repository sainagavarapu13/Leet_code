int top;
int stack[10000];
int Top(){
	return stack[top];
}
void push(int val){
	top++;
	stack[top]=val;
}
void pop(){
	top--;
 }
int isempty(){
	if(top==-1) return 1;
	else return 0;
}
char* reverseParentheses(char* str) {
    	top=-1;
	    int i,p=0;
	    for(i=0;str[i]!='\0';i++){
		if(str[i]=='('){
		    push(i);
	    }
	    else if(str[i] == ')'){
            int l = Top();
            int r = i;
            while(l < r){
                
                //prinbtf("%d",l);
                char temp = str[l];
                str[l] = str[r];
                str[r] = temp;
                l++;
                r--;
            }
            pop();
        }
	}
	int an=0;
    char ans[20001];
	for(i=0;str[i]!='\0';i++){
		if(str[i]!='('&&str[i]!=')'){
		ans[an++]=str[i];
	}
	}
    for(i=0;ans[i]!='\0';i++){
        str[i]=ans[i];
    }
    str[an]='\0';
 return str;
}