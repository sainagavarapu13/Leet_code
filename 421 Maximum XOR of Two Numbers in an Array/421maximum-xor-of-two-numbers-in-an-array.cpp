class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int res = 0,mask = 0;
        for(int b=31;b>=0;b--){
            mask |= 1<<b;
            unordered_set<int> s;
            for(int i:nums){
                s.insert(mask&i);
            }
            int temp = res|1<<b;
            for(int i:s){
                if(s.count(i^temp)){
                    res = temp;
                    break;
                }
            }
        }
        return res;
    }
};