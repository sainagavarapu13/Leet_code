/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
int guess(int num);
int guessNumber(int n){
	long l = 0;
    long r = n;
    while(l<=r){
        if(guess(floor((l+r)/2)) == 1){
            l = 1+floor((l+r)/2);
        }else if(guess(floor((l+r)/2)) == -1){
            r = -1+floor((l+r)/2);
        }else{
            return floor((l+r)/2);
        }
    }
    return 0;
}