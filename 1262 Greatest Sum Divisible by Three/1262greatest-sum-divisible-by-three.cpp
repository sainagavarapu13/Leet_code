class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = 0;
        vector<int> one, two;

        for (int x : nums) {
            sum += x;
            if (x % 3 == 1) one.push_back(x);
            else if (x % 3 == 2) two.push_back(x);
        }

        sort(one.begin(), one.end());
        sort(two.begin(), two.end());

        if (sum % 3 == 1) {
            int remove1 = one.size() >= 1 ? one[0] : INT_MAX;
            int remove2 = two.size() >= 2 ? two[0] + two[1] : INT_MAX;

            sum -= min(remove1, remove2);
        }
        else if (sum % 3 == 2) {
            int remove1 = two.size() >= 1 ? two[0] : INT_MAX;
            int remove2 = one.size() >= 2 ? one[0] + one[1] : INT_MAX;

            sum -= min(remove1, remove2);
        }

        return sum < 0 ? 0 : sum;
    }
};
