class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum;
        for( int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        sort(nums.begin(),nums.end(),greater<>());
        float avg = sum/(float)nums.size();
        for( int i=1;i<nums[0];i++){
            if( avg < i){
                if( find(nums.begin(),nums.end(),i)==nums.end()) return i;
            }
        }
        if( nums[0]<0) return 1;
        else return nums[0]+1;
        
    }
};