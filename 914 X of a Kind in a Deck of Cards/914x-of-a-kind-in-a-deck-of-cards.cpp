class Solution {
public:
    bool hasGroupsSizeX(vector<int>& a) {
        int i;
        map<int,int>mp;
        if(a.size()==1) return 0;
        for(auto& i:a) mp[i]++;
        vector<int>t;
        for(auto &[n,c]:mp){
            t.push_back(c);
        }
         int gcd_val = t[0];
        for (int i = 1; i < t.size(); ++i) {
            gcd_val = gcd(gcd_val, t[i]);
            if (gcd_val == 1) return false; 
        }
        return gcd_val > 1;
    }
};