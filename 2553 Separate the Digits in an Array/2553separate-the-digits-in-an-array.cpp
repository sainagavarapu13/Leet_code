class Solution {
public:
    vector<int> separateDigits(vector<int>& n) {
        vector<int>a;
        for(int i:n){
           string s = to_string(i);
            for(char k : s) a.push_back(k-'0');
        }
        return a;
        
    }
};