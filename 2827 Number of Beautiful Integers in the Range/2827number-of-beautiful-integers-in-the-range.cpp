class Solution {
public:
    bool check(int n){
        int s=0;
        while(n){
           if((n%10)%2==0){
            s++;
           }
           else{
            s--;
           }
            n/=10;
            
        }
        return s==0;
    }
    int numberOfBeautifulIntegers(int low, int high, int k) {
        if( high < 10 || low > 1e8) return 0;
      if(low%k!=0){
        int l_add = k - (low%k);
        low+=l_add;
      }  
      if(high%k!=0)
        high-=(high%k);
      
       int cnt=0;
       for(int i=low;i<=high;i+=k){
       
        if(check(i)){ cnt++;}
         if( i > 1e8) return cnt; 
       }
       return cnt;
    }
};