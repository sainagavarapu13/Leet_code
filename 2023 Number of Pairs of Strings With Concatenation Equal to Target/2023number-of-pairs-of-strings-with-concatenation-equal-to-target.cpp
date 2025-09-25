class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int r = 0;
        for(int i=0;i<nums.size();i++){
            string a = nums[i];
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                string b = a+nums[j];
                if(b==target) r++;
            }
        }
        return r;
    }
};