class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size(),a=0,b=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                a = i;
                b = i;
                break;
            }
        }
        for(int i=b+1;i<n;i++){
            cout<<" !"<<nums[i]<<endl;
            if(nums[i]==1){
                cout<<"-"<<i<<" "<<a<<endl;
                if((i-a-1)<k){
                    return 0;
                }
                a = i;
            }
        }
        return 1;
    }
};