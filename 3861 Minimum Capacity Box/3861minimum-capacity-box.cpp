class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int res = INT_MAX,ind = -1;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize){
                if(res>capacity[i]) ind = i;
                res = min(res,capacity[i]);
            }
        }
        return ind;
    }
};