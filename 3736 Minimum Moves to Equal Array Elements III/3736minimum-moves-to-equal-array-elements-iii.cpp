class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m =0;
        for( int i : nums){
            m = max( m , i);
        }
        int sum=0;
        for( int i: nums){
            sum+=abs(m-i);
        }
        return sum;
    }
};