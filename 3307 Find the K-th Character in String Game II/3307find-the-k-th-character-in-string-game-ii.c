char kthCharacter(long long k, int* a, int l) {
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
			if( a[ind]==1) step++;
			k-=mid;
		}
		high = mid;
		ind--;
	}
	
	return ('a' + ( step % 26 ));
}