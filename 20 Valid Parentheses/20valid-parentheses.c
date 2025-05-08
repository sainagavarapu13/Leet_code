#define max 10000
int top;
char s[max];
void SET(){
    top=-1;
    
}
void push(char val){
	if(top==max) {
        //printf("stack filled");
        return ;
    }
    top++;
    s[top]=val;
}
void pop(){
    if(top==-1){
        return;
    }
    top--;
}
int isempty(){
	if(top==-1) return 1;
	else return 0;
}
int Top(){
	return s[top];
}
bool isValid(char* s) {
    SET();
    int i,f=0;
    for(i=0;s[i]!='\0';i++){
		if(s[i]=='('||s[i]=='{'||s[i]=='['){
			push(s[i]);
		}
		else{
			if(s[i]==')'&&!isempty()&&Top()=='('){
				pop();
			}
			else if(s[i]=='}'&&!isempty()&&Top()=='{'){
				pop();
			}
			else if(s[i]==']'&&!isempty()&&Top()=='['){
				pop();
			}else{
				f=1;
				break;
			}
		}
	}
    //printf("%d",top);
	if(f==0&&top==-1)return 1;
    else if(top!=-1) return 0;
	else return 0;
}