class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>a;
        for( int i = 0; i < nums.size() ; i++ ){
            int val = nums[i];
            int j = (i+val)%(int)nums.size();
            if(j<0){
                j+=(nums.size());
            }
           a.push_back(nums[j]);
        }
        return a;
    }
};