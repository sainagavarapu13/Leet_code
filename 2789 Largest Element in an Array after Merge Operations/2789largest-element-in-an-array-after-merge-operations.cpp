class Solution {
public:
    long long maxArrayValue(vector<int>& n) {
        long long sum=0;
        for( int i=n.size()-1;i>=0;i--){
            if( sum >= n[i]) sum+=n[i];
            else sum = n[i];
        }
        return sum;
    }
};