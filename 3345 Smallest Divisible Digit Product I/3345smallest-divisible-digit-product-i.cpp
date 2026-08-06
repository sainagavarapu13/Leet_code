class Solution {
public:
    bool pro( int n , int t){
        int tot=1;
        while(n){
            if((n%10)%t==0 || tot%t==0) return 1;
            tot*=(n%10);
            if( tot%t==0) return 1;
            n/=10; 
        }
        
        return 0;
    }
    int smallestNumber(int n, int t) {
     int i =n;
     while(!pro(i,t)) i++;
     return i;   
    }
};