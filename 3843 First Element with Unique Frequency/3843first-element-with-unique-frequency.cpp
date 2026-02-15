class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        map<int,int> a;
        for(auto x:m){
            a[x.second]++;
        }
        for(int i=0;i<n;i++){
            if(a[m[nums[i]]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};