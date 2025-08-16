class Solution {
public:
    int binary(int val, vector<int>& a) {
        int h = a.size() - 1;
        int l = 0;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (a[mid] == val) {
                return mid;
            } else if (a[mid] > val) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;  
    }
    
    int searchInsert(vector<int>& nums, int target) {
        return binary(target, nums);
    }
};