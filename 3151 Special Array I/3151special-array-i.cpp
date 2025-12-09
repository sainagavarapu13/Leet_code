class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
       
        for( int i=0;i<nums.size()-1;i++){
             int a=0,b=0;
            if(i+1 < nums.size()){
                if( nums[i]%2==0) a=1;
                else a=0;
                if( nums[i+1]%2==1) b=1;
                else b=0;

            }
            if( a!=b) return 0;
        }
        
        return 1;
    }
};