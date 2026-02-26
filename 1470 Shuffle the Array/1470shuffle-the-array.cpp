class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v,u;
        for(int i=0;i<nums.size();i++){
            if(v.size()<n){
                // cout<<"v"<<nums[i]<<endl;
                v.push_back(nums[i]);
                continue;
            }
            // cout<<"u"<<nums[i]<<endl;
            u.push_back(nums[i]);
        }
        int a = 0;
        for(int i=0;i<2*n;i++){
            // cout<<v[a]<<" "<<u[a]<<endl;
            nums[i] = v[a];
            nums[++i] = u[a];
            a++;
        }
        return nums;
    }
};