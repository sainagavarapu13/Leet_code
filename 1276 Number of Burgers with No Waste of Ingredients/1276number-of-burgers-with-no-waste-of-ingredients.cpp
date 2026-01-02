class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> ans;

        int diff = tomatoSlices - 2 * cheeseSlices;
        if (diff < 0 || diff % 2 != 0) return ans;

        int jumbo = diff / 2;
        int small = cheeseSlices - jumbo;

        if (small < 0) return ans;

        ans.push_back(jumbo);
        ans.push_back(small);
        return ans;
    }
};
