

class Solution {
public:
    int getCommon(vector<int>& n1, vector<int>& n2) {
        int i = 0, j = 0;
        int n = n1.size(), m = n2.size();
        
        while (i < n && j < m) {
            if (n1[i] == n2[j]) {
                return n1[i]; 
            } else if (n1[i] < n2[j]) {
                i++;
            } else {
                j++;
            }
        }
        
        return -1;
    }
};