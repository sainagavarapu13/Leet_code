class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            set<int> m;
            set<int> n;
            for(int j=i;j<nums.size();j++){
            if(nums[j]%2==0) m.insert(nums[j]);
            if(nums[j]%2!=0) n.insert(nums[j]);
            if(m.size()==n.size()){
                res = max(res,j-i+1);
            }
            }
        }
        return res;
    }
};