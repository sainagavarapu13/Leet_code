class Solution {
public:
    int largestInteger(int n, int s) {
        int num=0;
        if(s>9*n) return -1;
        while(n--){
            num=num*10+min(9,s);
            
                s-=min(s,9);
            
            
        }
        return num;
    }
};