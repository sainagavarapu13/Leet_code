class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int pro = 1;
        int zeroCount = 0; 
        vector<int> a;
        for(int i : n) { 
            if(i != 0) {
                pro *= i;
            } else {
                zeroCount++;
            }
        }
        if(zeroCount > 1) {
            for(int i = 0; i < n.size(); i++) {
                a.push_back(0);
            }
            return a;
        }
        if(zeroCount == 1) {
            for(int i : n) {
                if(i == 0) a.push_back(pro);
                else a.push_back(0);
            }
            return a;
        }
        for(int i : n) {
            a.push_back(pro / i);
        }
        return a;
    }
};