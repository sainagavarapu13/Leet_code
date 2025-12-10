class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> v;
        int n=nums.size(),a=0;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> u(m.begin(),m.end());
        sort(u.begin(),u.end(),[](const pair<int,int>&a,const pair<int,int>&b){
           return (a.second==b.second) ? (a.first>b.first) : (a.second<b.second);
        });
        for(auto x:u){
            for(int i=0;i<x.second;i++){
                v.push_back(x.first);
            }
        }
        return v;
    }
};