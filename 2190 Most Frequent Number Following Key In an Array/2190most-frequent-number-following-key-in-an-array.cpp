class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int> m;
        for(int i=0;i<nums.size()-1;i++){
            if(key==nums[i]) m[nums[i+1]]++;
        }
        int a=0,b= -1;
        for(auto [target,cnt]:m){
            if(a<cnt){
                a = cnt;
                b = target;
            }
        }
        return b;
    }
};