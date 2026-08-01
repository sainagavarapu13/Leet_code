class Solution {
public:
    bool fun(vector<int>& n, int i, int j, int a, int b, bool turn) {
        
        if(i > j) {
            return a >= b;
        }
        
        if(turn == false) {  
            return fun(n, i+1, j, a + n[i], b, true) ||
                   fun(n, i, j-1, a + n[j], b, true);
        } 
        else {  
            return fun(n, i+1, j, a, b + n[i], false) &&
                   fun(n, i, j-1, a, b + n[j], false);
        }
    }
    
    bool predictTheWinner(vector<int>& nums) {
        return fun(nums, 0, nums.size()-1, 0, 0, false);
    }
};