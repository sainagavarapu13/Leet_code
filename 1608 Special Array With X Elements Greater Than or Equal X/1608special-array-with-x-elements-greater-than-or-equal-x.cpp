class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int s = 0, e = n;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            int cnt=0;
              for(int i=0;i<nums.size();i++){
                if(nums[i]>=mid){
                    cnt++;
                }
            }
            if (cnt == mid) {
                return mid;
            } 
            else if (cnt > mid) {
                s = mid + 1;
            } 
            else {
                e = mid - 1;
            }
        }
        return -1;
    }
};
