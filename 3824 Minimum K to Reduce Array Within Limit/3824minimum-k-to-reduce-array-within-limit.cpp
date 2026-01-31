class Solution {
public:
    bool fun(vector<int>&a , long long k){
        long long sum =0;
        for(int i=0;i<a.size();i++){
            sum+= (a[i]+k-1)/k;
            if(sum >1LL* k*k) return false;
        }
        if(sum>k*k) return false;
        return true;
    }
    int minimumK(vector<int>& a) {
        long long start = 1,end = 1e6;
        
        while(start<end){
            long long m = (start+end)/2;
            if(fun(a,m)){
                end = m;
            }
            else start = m+1;
        }
        return (int)start;
    }
};