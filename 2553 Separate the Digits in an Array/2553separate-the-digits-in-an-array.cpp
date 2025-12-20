class Solution {
public:
    vector<int> digits(int n){
        vector<int>ans;
        while(n){
            ans.push_back(n%10);
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> separateDigits(vector<int>& a) {
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            vector<int>temp=digits(a[i]);
            ans.insert(ans.end(),temp.begin(),temp.end());
        }
        return ans;
    }
};