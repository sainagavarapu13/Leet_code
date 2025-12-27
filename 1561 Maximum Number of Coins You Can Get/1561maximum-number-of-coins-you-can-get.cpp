class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int sum = 0,n = piles.size();
        int k = n/3,i=n-2;
        while(k--){
            sum += piles[i];
            i = i-2;
        }
        return sum;
    }
};