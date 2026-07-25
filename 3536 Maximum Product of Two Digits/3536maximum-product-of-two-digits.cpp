class Solution {
public:
    int maxProduct(int n) {
        int maxi1=INT_MIN,maxi2=INT_MIN;
        while(n){
            int k=n%10;
            if(maxi1<k){
                maxi2=maxi1;
                maxi1=k;
            }
           else if(maxi2<k){
            maxi2=k;
           }
            n/=10;
        }
        return maxi1*maxi2;
    }
};