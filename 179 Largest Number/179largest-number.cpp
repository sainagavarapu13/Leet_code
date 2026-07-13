class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        int a = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) a++;
            v.push_back(to_string(nums[i]));
        }
        if(a==nums.size()) return "0";
        sort(v.rbegin(),v.rend(),[](string &a,string &b){
            return a+b < b+a;
        });
        string s = "";
        for(int i=0;i<v.size();i++){
            s+=v[i];
        }
        return s;
    }
};