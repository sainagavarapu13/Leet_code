class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> v;
        int n = nums.size(),e = INT_MIN;
        for(int i=0;i<n;i++){
            int a = nums[i];
            int b = INT_MIN;
            int c = INT_MAX;
            if(a==0){
                v.push_back(0);
                continue;
            }
            while(a>0){
                int d = a%10;
                b = max(d,b);
                c = min(d,c);
                a = a/10;
            }
            e = max(e,b-c);
            v.push_back(b-c);
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(v[i]==e){
                res += nums[i];
            }
        }
        return res;
    }
};