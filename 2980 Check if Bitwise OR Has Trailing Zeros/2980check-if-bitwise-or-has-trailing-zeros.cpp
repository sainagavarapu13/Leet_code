class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int s=0;
        for( int i: nums){
            if(i%2==0) s++;
        }
        if( s>=2) return 1;
        else return 0;
        
    }
};