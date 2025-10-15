char kthCharacter(int k) {
    long long x =1;
	long long ind =0;
	while(x<k){
		x<<=1;
		ind++;
	}
	
	ind--;
	long long high = x;
	long long step=0;
	while(ind>=0){
		long long mid = high >>1;
		if( k > mid){
			k-=mid;
			step++;
		}
		
		high = mid;
		ind--;
	}
	
	return('a' + ( step % 26 ) );
}