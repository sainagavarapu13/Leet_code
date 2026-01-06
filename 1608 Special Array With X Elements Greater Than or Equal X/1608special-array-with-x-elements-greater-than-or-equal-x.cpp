class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0,j = nums[nums.size()-1];
        while(i<=j){
            int mid  = (i+j)/2;
            int a = 0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=mid){
                    a++;
                }
            }
            if(a==mid){
                return mid;
            }
            else if(a>mid){
                i = mid+1;
            }
            else{
                j = mid-1; 
            }
            //cout<<i<<" "<<j<<endl;
        }
        return -1;
    }
};