class Solution {
public:
    vector<int> targetIndices(vector<int>& a, int b) {
        sort(a.begin(), a.end());

        vector<int> c;
        int cntL = 0, cnt = 0;

        for (int x : a) {
            if (x < b) cntL++;
            else if (x == b) cnt++;
        }

        for (int i = 0; i < cnt; i++) {
            c.push_back(cntL + i);
        }
        return c;
    }
};
