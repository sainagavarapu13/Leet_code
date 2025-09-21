class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        vector<int> b;
        int i=0;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                for(int j=i+1;j<nums.size();j++){
                    b.push_back(nums[j]);
                    cout<<nums[j]<<" ";
                }
                break;
            }
        }
        for(int k=0;k<=i;k++){
            b.push_back(nums[k]);
            cout<<"-" <<nums[k];
        }
        if(b.size()==0) return true;
        for(i=0;i<b.size();i++){
            if(v[i]!=b[i]) return false;
        }
        return true;
    }
};