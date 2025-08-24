class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = INT_MIN;
        int cnt=0;
        for( int i : nums){
            if( i == 1){
                cnt++;
            }else{
                maxi = max( maxi , cnt);
                cnt=0;
            }
        }
        maxi = max( maxi , cnt);
        if( maxi == INT_MIN) return 0;
        else return maxi;
        
    }
};