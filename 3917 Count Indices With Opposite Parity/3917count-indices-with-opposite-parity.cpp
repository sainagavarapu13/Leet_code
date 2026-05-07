class Solution {
public:
    vector<int> countOppositeParity(vector<int>& a) {
        vector<int>ans;
        int eve=0,odd=0;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==0){
                eve++;
            }
            else{
                odd++;
            }
        }
        for(int i=0;i<a.size();i++){
            if(a[i]%2==0){
                ans.push_back(odd);
                eve--;
            }
            else{
                ans.push_back(eve);
                odd--;
            }
        }
        return ans;
    }
};