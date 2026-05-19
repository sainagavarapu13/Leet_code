class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int start=0,end=10;
        map<string , int>mp;
        while(end<=s.size()){
          string temp(s.begin()+start , s.begin()+end);
            mp[temp]++;
            start++;
            end++;
        }
        vector<string>ans;
        for(auto& [n,c]:mp){
            if(c>1){
                ans.push_back(n);
            }
        }
        return ans;
    }
};