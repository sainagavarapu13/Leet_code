class Solution {
public:
    long long removeZeros(long long n) {
        long long b=0;
        vector<int>a;
        while(n){
            int k=n%10;
            if(k!=0){
                a.push_back(k);
            }
            n=n/10;
        }
    
    reverse(a.begin(),a.end());
    n=0;
    for(int i=0;i<a.size();i++){
        n=n*10+a[i];
    }
    return n;
    }
};