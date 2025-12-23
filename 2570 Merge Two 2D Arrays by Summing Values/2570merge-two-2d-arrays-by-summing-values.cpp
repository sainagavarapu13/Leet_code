class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> merged;

        for (auto& p : nums1) merged[p[0]] += p[1];
        for (auto& p : nums2) merged[p[0]] += p[1];

        vector<vector<int>> result;
        for (auto& [id, val] : merged) {
            result.push_back({id, val});
        }
        return result;
    }
};