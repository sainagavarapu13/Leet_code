class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>n;
        int a=-1,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                n[nums[i]]++;
            }
        }
        for(auto x:n){
            if(x.second>b){
                b = x.second;
                a = x.first;
            }
            else if(x.second==b){
                a = a < x.first ? a : x.first;
            }
        }
        return a;
    }
};