int sum(int n){
	int s=0;
	while(n!=0){
		int k=n%10;
		s=s+k;
		n=n/10;
	}
	if(s%2==0) return 1;
	else return 0;
}
int countEven(int n) {
    	int i,cnt=0;
	for(i=1;i<=n;i++){
		if(sum(i)){
			cnt++;
		}
	}
	return cnt;
}