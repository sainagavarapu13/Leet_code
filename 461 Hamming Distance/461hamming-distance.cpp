class Solution {
public:
    int hammingDistance(int x, int y) {
        int k=x^y;
        int cnt=0;
        while(k){
            if(k%2==1) cnt++;
            k=k/2;
        }
        return cnt;
    }
};