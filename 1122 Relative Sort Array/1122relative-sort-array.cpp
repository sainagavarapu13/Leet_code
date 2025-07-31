class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a, vector<int>& b) {
        map<int, int> c;
        for(int i : a) c[i]++;
        
        vector<int> res;
        for(int i : b) {
            while(c[i] > 0) {
                res.push_back(i);
                c[i]--;
            }
        }
        
        for(auto& [num, count] : c) {
            while(count > 0) {
                res.push_back(num);
                count--;
            }
        }
        
        return res;
    }
};