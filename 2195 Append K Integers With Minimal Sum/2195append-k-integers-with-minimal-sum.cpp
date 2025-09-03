class Solution {
public:
    long long minimalKSum(vector<int>& a, int k) {
        long long sum=(long long)k * (k + 1) / 2;
        set<int>s;
        for(auto& i:a) s.insert(i);
        int l=1,p=k;
        for(auto & i: s){
            if(i<=k){
            sum=sum-i;
            sum=sum+k+1;
           
           k++;
            }
        }
        return sum;
    }
};