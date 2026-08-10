class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long tot=nums[0];
        for( int i=1;i< nums.size();i++){
            tot^=nums[i];
        }
            long long right_most_set_bit = tot&(-tot);
            long long a=0,b=0;
            for( int j=0;j<nums.size();j++){
               if( right_most_set_bit&nums[j]) a^=nums[j];
               else b^=nums[j];
            }
               return {(int)b , (int)a};
            
    }
};