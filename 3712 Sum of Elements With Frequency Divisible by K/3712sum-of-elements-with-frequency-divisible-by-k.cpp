class Solution {
public:
    int sumDivisibleByK(vector<int>& a, int k) {
        map<int,int>m;
        for(auto& i:a){
            m[i]++;
        }
        int sum=0;
        for(auto& [n,c]: m){
            if(c%k==0){
                sum+=(n*c);
            }
        }
        return sum;
    }
};