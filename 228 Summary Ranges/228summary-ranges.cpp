class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int n = nums.size();
        int i=0;
        while(i<n){
            int s = nums[i];
            int j = i;
            while(j+1<n && nums[j+1]==nums[j]+1) ++j;
            if(j==i){
                v.push_back(to_string(s));
            }
            else{
                v.push_back(to_string(s)+"->"+to_string(nums[j]));
            }
            i = j + 1;
        }
        return v;
    }
};