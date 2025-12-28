class Solution {
public:
    int minAllOneMultiple(int k) {
        
        if (k == 1) return 1;
        
      
        if (k % 2 == 0 || k % 5 == 0) return -1;

        int remainder = 0; 
        int cnt = 0;      
        while (true) {
            remainder = (remainder * 10 + 1) % k; 
            cnt++;
            if (remainder == 0) return cnt; 
        }
        
        return -1;
    }
};
