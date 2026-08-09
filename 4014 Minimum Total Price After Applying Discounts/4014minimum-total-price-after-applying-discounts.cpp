class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        int i=0,j=0,n= prices.size(),m=discounts.size();
        double res=0*1.0;
        while(i<n && j<m){
            res += (double)((prices[i]*(100-discounts[i]))/(100*1.0));
            // cout<<res<<endl;
            i++;
            j++;
        }
        for(int j=i;j<n;j++){
            res += prices[j];
        }
        return res;
    }
};