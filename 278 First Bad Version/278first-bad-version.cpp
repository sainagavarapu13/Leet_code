// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        while(n){
        if(isBadVersion(n)){
            n--;
        }
        else{
            return n+1;
        }
        }
        return 1;
    }
};