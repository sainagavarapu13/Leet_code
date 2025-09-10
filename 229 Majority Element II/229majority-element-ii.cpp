class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        vector<int> v;
        int b = nums.size()/3,a;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]>b){
                auto it = find(v.begin(),v.end(),nums[i]);
                if(it==v.end()) v.push_back(nums[i]);
            }
        }
        return v;
    }
};