class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> res;
        for(long long x : nums){
            string s ="";
            while(x>=(1LL<<25)){
                s += 'z';
                x -= (1LL<<25);
            }
            for(int p = 24;p>=0;p--){
                if(x>=(1LL<<p)){
                    s += ('a'+p);
                    x -= (1LL<<p);
                }
            }
            res.push_back(s);
        }
        return res;
    }
};