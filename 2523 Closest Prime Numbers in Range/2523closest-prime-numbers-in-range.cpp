class Solution {
public:
    int isprime(int n){
        if(n==0||n==1) return 0;
        if(n==2) return 1;
        else if(n%2==0) return 0;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return 0;
        }
        return 1;
    }
    vector<int> closestPrimes(int left, int right) {
     vector<int>res;
        if(left==right) {
            res.push_back(-1);
        res.push_back(-1);
        return res;
        }
        vector<int>pri;
        for(int i=left;i<=right;i++){
            if(isprime(i)){
                pri.push_back(i);
            }
        }
       if (pri.size() < 2) {
            return {-1, -1};
        }
      int m=INT_MAX,n1=-1,n2=-1;
        for(int i=0;i<pri.size()-1;i++){
           if(pri[i+1]-pri[i]<m){
            m=pri[i+1]-pri[i];
            n1=pri[i];
            n2=pri[i+1];
           }
        }
        
        
            res.push_back(n1);
            res.push_back(n2);
        
        return res;
    }
};