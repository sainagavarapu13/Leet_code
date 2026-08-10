class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>v(32,0);
        for( int i=0;i<32;i++){
            for( int j =0;j<nums.size();j++){
                if( (1<<i)&(nums[j])) v[i]++;
            }
        }
        int res=0;
        for( int i=0;i<32;i++){
            if( v[i]%3!=0){
                res|=(1<<i);
            }
        }
        return res;
    }
};