class Solution {
public:
    vector<vector<int>> ans;
    vector<int> cur;

    void check(int idx, vector<int>& a, int target) {
        if(target == 0){
            ans.push_back(cur);
            return;
        }

        for(int i = idx; i < a.size(); i++) {

            if(i > idx && a[i] == a[i-1])
                continue;

            if(a[i] > target)
                break;

            cur.push_back(a[i]);
            check(i + 1, a, target - a[i]);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        sort(a.begin(), a.end());
        check(0, a, target);
        return ans;
    }
};