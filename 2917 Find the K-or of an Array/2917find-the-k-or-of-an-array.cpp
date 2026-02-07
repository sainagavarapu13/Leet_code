class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int n = 0,maxi = 0;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,std::bit_width((unsigned int)nums[i]));
        }
        for(int mask = 0;mask<maxi;mask++){
            int temp = 1<<mask,a=0;
            for(int i=0;i<nums.size();i++){
                if((temp&nums[i])>0)a++;
                if(a>=k) break;
            }
            if(a>=k) n += pow(2,mask);
        }
        return n;
    }
};