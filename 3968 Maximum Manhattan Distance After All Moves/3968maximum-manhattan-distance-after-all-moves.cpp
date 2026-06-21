class Solution {
public:
    int maxDistance(string moves) {
        int U = 0, D = 0, L = 0, R = 0, k = 0;
        for(char c : moves) {
            if(c == 'U') U++;
            else if(c == 'D') D++;
            else if(c == 'L') L++;
            else if(c == 'R') R++;
            else k++;
        }

        return abs(R - L) + abs(U - D) + k;
    }
};