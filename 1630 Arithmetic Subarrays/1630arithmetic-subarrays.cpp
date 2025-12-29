class Solution {
public:
    bool ar(vector<int> nums){
        bool a = true;
        int n = nums.size();
        if(nums.size()<=1) return a;
        int b = (nums[1] - nums[0]);
        for(int i=0;i<n-1;i++){
            if((nums[i+1]-nums[i])!=b){
                a = false;
                break;
            }
        }
        return a;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> v;
        for(int i=0;i<l.size();i++){
            vector<int> s(nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(s.begin(),s.end());
            v.push_back(ar(s));
        }
        return v;
    }
};