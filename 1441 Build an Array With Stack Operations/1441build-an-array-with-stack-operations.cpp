class Solution {
public:
    vector<string> buildArray(vector<int>& a, int n) {
        vector<string>ans;
        auto &m=*max_element(a.begin(),a.end());
        int k=1;
        while(k<=m){
            if(count(a.begin(),a.end(),k)){
                ans.push_back("Push");
            }
            else{
                 ans.push_back("Push");
                  ans.push_back("Pop");
            }
            k++;
        }
        return ans;
    }
};