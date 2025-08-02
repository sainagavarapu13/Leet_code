class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        map<int,int> m;
       for(auto& i:a){
        m[i]++;
       }
       int len=a.size();
       vector<int>res;
        for(auto& [nums,cnt]:m){
        if(cnt>len/3){
            res.push_back(nums);
        }
       }
       return res;
    }
};