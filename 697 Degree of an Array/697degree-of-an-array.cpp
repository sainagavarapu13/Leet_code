class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int b=0,d=0,e=0,f=INT_MAX;
        map<int,int>a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
            if(b<a[nums[i]]){
                b = a[nums[i]];
            }
        }
        for(auto x : a){
            if(x.second==b){
                for(int i=0;i<nums.size();i++){
                    if(nums[i]==x.first){
                        d = i;
                        break;
                    }
                }
                for(int j=nums.size()-1;j>=0;j--){
                    if(nums[j]==x.first){
                        e = j;
                        break;
                    }
                }
                int h = e-d+1;
                if(f>h){
                    f = h;
                }
            }
        }
        return f;
    }
};