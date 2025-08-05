class Solution {
public:
    int minimumOperations(vector<vector<int>>& m) {
        int x = m.size();      
        int y = m[0].size();    
        int sum = 0;
        for(int i = 0; i < y; i++) {         
            for(int j = 1; j < x; j++) {     
                if(m[j][i] <= m[j-1][i]) {    
                    int diff = m[j-1][i] - m[j][i] + 1; 
                    sum += diff;
                    m[j][i] += diff;         
                }
            }
        }
        
        return sum;
    }
};