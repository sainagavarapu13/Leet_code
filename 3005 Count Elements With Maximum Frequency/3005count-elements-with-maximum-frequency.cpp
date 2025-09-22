class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> m;
        int a=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(a<m[nums[i]]) a = m[nums[i]];
        }
        int b=0;
        for(auto x:m){
            if(a==x.second){
                b += x.second;
            }
        }
        return b;
    }
};