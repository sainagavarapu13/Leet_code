class Solution {
public:
    bool canJump(vector<int>& a) {
        int far = 0;
        for(int i=0;i<a.size();i++){
            if(i > far)
                return false;
            far = max(far, i + a[i]);
        }
        return true;
    }
};