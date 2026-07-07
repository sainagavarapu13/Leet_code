class Solution {
public:
    long long sumAndMultiply(int n) {
        long long  res  = 0;
        vector<int> v;
        while(n>0){
            if((n%10)!=0) v.push_back(n%10);
            n = n/10;
        }
        long long a = 0,b = 10;
        for(int i=v.size()-1;i>=0;i--){
            // cout<<v[i]<<" ";
            a = a*b+v[i];
            res += v[i];
        }
        // cout<<endl;
        // cout<<a<<" "<<res<<endl;
        return res*a;
    }
};