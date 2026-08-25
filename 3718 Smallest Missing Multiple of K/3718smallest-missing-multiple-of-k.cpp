class Solution {
public:
    int missingMultiple(vector<int>& a, int k) {
        int i=1;
       while (true) {
            // Check if k*i is not in the array
            if (find(a.begin(), a.end(), k * i) == a.end())
                return k * i;
            i++;
        }
        return k*i;
        
    }
};