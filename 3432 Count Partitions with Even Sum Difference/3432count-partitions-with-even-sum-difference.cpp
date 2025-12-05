class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int cnt =0;
        int o=0,e=0;
        for( int i:nums){
            if( i%2==0) e++;
            else o++;
        }
        if(o%2!=0) return 0;
        else{
            return o+e-1;
        }
        if( nums.size() == e && o==0) return e-1;
        
        
    }
};