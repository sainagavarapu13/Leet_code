class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        special.push_back(bottom-1);
        special.push_back(top + 1);
        sort(special.begin(),special.end());
        int a {};
        for(int i=1;i<special.size();i++){
            a = max(a,special[i]-special[i-1]);
        }
        return a-1;
    }
};