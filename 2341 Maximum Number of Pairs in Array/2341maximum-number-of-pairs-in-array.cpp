class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int a = 0,b = 0;
        for(auto x : m){
            if(x.second%2==0){
                a+=x.second/2;
            }
            else{
                a+=x.second/2;
                b++;
            }
        }
        return{a,b};
    }
};