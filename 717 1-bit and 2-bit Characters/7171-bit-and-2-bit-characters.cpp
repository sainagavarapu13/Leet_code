class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        int i=0;
        if(n==1) return true;
        while(i<bits.size()){
            if(bits[i]==1) i+=2;
            else i++;
            if(i==n-1) return true;
            if(i>=n) return false;
        }
        return true;
    }
};