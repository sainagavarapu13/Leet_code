class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> res;
        while(1){
            for(auto x:m){
                if(x.second!=0) {
                    res.push_back(x.first);
                    m[x.first]--;
                }
            }
            // cout<<res.size()<<endl;
            if(res.size()==nums.size()) break;
        }
        return res;
    }
};