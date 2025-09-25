class Solution {
public:
    
    int totalHammingDistance(vector<int>& a) {
        int i,sum=0;
        for(i=0;i<a.size()-1;i++){
            for(int j=i+1;j<a.size();j++){
                sum+=__builtin_popcount(a[i]^a[j]);
            }
            
        }
        return sum;
    }
};