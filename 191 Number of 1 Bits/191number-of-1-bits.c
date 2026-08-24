int hammingWeight(int n) {
    	int cnt=0; 
	while(n){
		if(n%2!=0)
		cnt++;
		n=n/2;
	}
    return cnt;
}