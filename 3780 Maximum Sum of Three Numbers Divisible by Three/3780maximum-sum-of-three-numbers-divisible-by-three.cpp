class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int>s,j,k;
        for(int i:nums){
            if(i%3==0)s.push_back(i);
            else if(i%3==1)j.push_back(i);
            else k.push_back(i);
        }
        sort(s.rbegin(),s.rend());
        sort(j.rbegin(),j.rend());
        sort(k.rbegin(),k.rend());
        int ans=0;
        if (s.size()>=3) ans=max(ans,s[0]+s[1]+s[2]);
        if (j.size()>=3) ans=max(ans,j[0]+j[1]+j[2]);
        if (k.size()>=3) ans=max(ans,k[0]+k[1]+ k[2]);
        if(s.size()>=1 && j.size()>=1 && k.size()>=1)
    ans=max(ans, s[0]+j[0]+k[0]);
        return ans;
    }
};