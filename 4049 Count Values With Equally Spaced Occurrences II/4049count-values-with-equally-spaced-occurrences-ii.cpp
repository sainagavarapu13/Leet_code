class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>> m;
        int n = nums.size(),res = 0;
        for(int i=0;i<n;i++){
            m[nums[i]].push_back(i);
        }
        for(auto x:m){
            if(x.second.size()>=3){
                int a = x.second[1]-x.second[0],b = 1;
                for(int j=2;j<x.second.size();j++){
                    if((x.second[j]-x.second[j-1])!=a){
                        b = 0;
                        break;
                    }
                }
                if(b) res++;
            }
        }
        return res;
    }
};