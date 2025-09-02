/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i;
       
       while(1){
           int a= guess(n/2);
           if(a==0){
            return n/2;
           }
           else if(a==-1){
            n=(n/2)-1;
           }
           else n=(n/2)+1;
        }
    return -1;
    }
};