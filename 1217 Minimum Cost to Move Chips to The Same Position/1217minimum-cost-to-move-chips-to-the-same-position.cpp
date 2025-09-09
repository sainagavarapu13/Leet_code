class Solution {
public:
    int minCostToMoveChips(vector<int>& a) {
        int i,eve=0,odd=0;
        for(i=0;i<a.size();i++){
            if(a[i]%2==0) eve++;
            else odd++;
        }
        return min(eve,odd);
    }
};