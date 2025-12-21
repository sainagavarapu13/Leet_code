class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int a=0;
        for(int i=0;i<n;i++){
            set<int> v;
            for(int j=i;j<n;j++){
                v.insert(nums[j]);
                if(v.size()==s.size()){
                    a++;
                }
            }
        }
        return a;
    }
};