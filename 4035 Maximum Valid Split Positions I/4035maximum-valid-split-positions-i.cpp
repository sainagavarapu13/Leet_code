class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int rem = -1;rem<n;rem++){
            vector<int> arr;
            for(int i=0;i<n;i++){
                if(rem!=i){
                    arr.push_back(nums[i]);
                }
            }
            int m = arr.size();
            vector<int>pref(m),suff(m);
            pref[0] = arr[0];
            for(int i=1;i<m;i++){
                pref[i] = gcd(pref[i-1],arr[i]);
            }
            suff[m-1] = arr[m-1];
            for(int i = m-2;i>=0;i--){
                suff[i] = gcd(arr[i],suff[i+1]);
            }
            int src = 0;
            for(int i=0;i<m-1;i++){
                if(pref[i]==suff[i+1]) src++;
            }
            ans = max(ans,src);
        }
        return ans;
    }
};