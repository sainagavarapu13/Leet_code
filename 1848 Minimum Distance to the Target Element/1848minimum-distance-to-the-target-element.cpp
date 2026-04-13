class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i=0,a;
    for(i=0;i<nums.size();i++){
        if(nums[i]==target){
            a = i;
            break;
        }
    }
    int c = abs(i-start);
    if(c==0) return c;
    i++;
    for(i;i<nums.size();i++){
        if(nums[i] == target){
            int d = abs(i-start);
            if(d<c){
                c = d;
            }
        }
    }
    return c;
    }
};