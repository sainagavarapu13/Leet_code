class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        a.push_back(nums[0]);
        b.push_back(nums[1]);
        int c = nums[0];
        int d = nums[1];
        for(int i=2;i<nums.size();i++){
            if(c>d){
                a.push_back(nums[i]);
                c = nums[i];
            }
            else{
                b.push_back(nums[i]);
                d = nums[i];
            }
        }
        a.insert(a.end(),b.begin(),b.end());
        return a;
    }
};