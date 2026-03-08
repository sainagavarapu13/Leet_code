class Solution {
public:
    int minimumIndex(vector<int>& a, int t) {
        int ans = INT_MAX;
        int ind = -1;  

        for(int i = 0; i < a.size(); i++){
            if(a[i] >= t && a[i] < ans){
                ans = a[i];
                ind = i;
            }
        }
        return ind;
    }
};