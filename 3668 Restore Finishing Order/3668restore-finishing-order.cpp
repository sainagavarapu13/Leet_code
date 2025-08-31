class Solution {
public:
    vector<int> recoverOrder(vector<int>& a, vector<int>& b) {
        map<int,int>m;
        vector<int>ans;
        for(auto& i:b) m[i]++;
        for(auto&i:a){
            if(m[i]==1){
                ans.push_back(i);
            }
        }
            return ans;
        
    }
};