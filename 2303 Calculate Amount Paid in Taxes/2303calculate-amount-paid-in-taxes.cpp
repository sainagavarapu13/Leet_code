class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double ans = 0;
        for(int i=0;i<brackets.size();i++){
                if(income==0){
                    return ans;
                }
                if(i==0){
                    if(income>=brackets[i][0]){
                        ans += brackets[i][0]*(brackets[i][1]/100.0);
                        income -=brackets[i][0];
                    }
                    else{
                        ans += (income)*(brackets[i][1]/100.0);
                        return ans;
                    }
                }
                else{
                    int a = brackets[i][0]-brackets[i-1][0];
                    if(income>=a){
                        ans += a*(brackets[i][1]/100.0);
                        income -= a;
                    }
                    else{
                        ans += income*(brackets[i][1]/100.0);
                        return ans;
                    }
                }
        }
        return ans;
    }
};