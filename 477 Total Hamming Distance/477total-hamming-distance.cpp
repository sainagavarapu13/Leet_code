class Solution {
public:
    int totalHammingDistance(vector<int>& a) {
        int cnt=0;
        for( int i=0;i<a.size()-1;i++){
            for(int j=i+1;j<a.size();j++){
                int b = a[i]^a[j];
                cnt+=__builtin_popcount(b);
            }
        }
        return cnt;
    }
};