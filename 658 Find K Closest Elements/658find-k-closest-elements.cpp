class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        sort(arr.begin(), arr.end(), [x](int a, int b) {
        return abs(a - x) < abs(b - x) || (abs(a - x) == abs(b - x) && a < b);});
    arr.resize(k);
    sort(arr.begin(), arr.end());
    return arr;
    }
};