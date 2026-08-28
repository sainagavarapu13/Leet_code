class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto a = lower_bound(nums.begin(), nums.end(), target);
        if (a == nums.end() || *a != target)
            return {-1, -1};
        auto b = upper_bound(nums.begin(), nums.end(), target);
        return {int(a - nums.begin()),int(b - nums.begin()) - 1};
    }
};