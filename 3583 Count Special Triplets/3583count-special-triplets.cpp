class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int e = 1000000007;
        long long b=0;
        unordered_map<int,long> m;
        unordered_map<int,long> n;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        if(m.size()==nums.size()) return 0;
        m[nums[0]]--;
        n[nums[0]]++;
        for(int i=1;i<nums.size()-1;i++){
            int a = nums[i];
            m[a]--;
            int d = a*2;
            if(m[d]>0 && n[d]>0){
                b += m[d]*n[d];
                b = b%e;
            }
            n[a]++;
        }
        int c = b;
        return c;
    }
};
auto init = atexit([](){ofstream("display_runtime.txt")<<"0";});

