class Solution {
public:
    int check(int a ){
        int cnt = 0 , sum =0;
        if(a<=5) return 0;
        for(int i = 1;i*i<=a;i++){
            if(a%i==0){
                if((a/i)!=i){
                    cnt+=2;
                    sum+=i;
                    sum+=a/i;
                }
                else{
                    cnt++;
                    sum+=i;
                }
            }
            if(cnt>4) return 0;
        }
        if(cnt==4) return sum;
        return 0;
    }
    int sumFourDivisors(vector<int>& a) {
        int sum = 0;
        for(int i=0;i<a.size();i++){
            sum+=check(a[i]);
        }
        return sum;
    }
};