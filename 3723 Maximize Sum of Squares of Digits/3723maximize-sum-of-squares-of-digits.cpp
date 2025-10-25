class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
       string ans;
        if(sum>9*num) return "";
        
        while(num--){
            int k=min(9,sum);
            ans.push_back(k+'0');
            sum=sum-k;
        }
        return ans;
    }
};