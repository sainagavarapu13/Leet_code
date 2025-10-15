class Solution {
public:
    char kthCharacter(long long k, vector<int>& a) {
        long long n=0;
        long long len=1;
        long long i=0;
        while(len<k){
            len=len*2;
            i++;
        }
     i--;
       
        while(i>=0){
            long long half=len/2;
            if(k>half){
                k=k-half;
                if(a[i]!=0){ 
                n++;
               
                }
            }
            i--;
            len=half;
        }
        return (n%26+'a');
    }
};