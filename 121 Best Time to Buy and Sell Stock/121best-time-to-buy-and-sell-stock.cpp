class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX,maxi=0;
        for(int p : prices){
            if(p <min){
                min = p;
            }
            else{
                maxi = max(maxi,p-min);
            }
        }
        return maxi;
    }
};