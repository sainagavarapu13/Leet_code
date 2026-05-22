class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>m;
        for(auto i=0;i<s.size();i++){
            m[s[i]] = i;
        }
        int i=0;
        vector<int>ans;
        while(i<s.size()){
            int prev=i;
            int start = m[s[i]];
        for(int j=0;j<=start;j++){
            start = max(start , m[s[j]]);
        } 
        ans.push_back(start-prev+1);
        i=start+1;
        }
        return ans;
    }
};