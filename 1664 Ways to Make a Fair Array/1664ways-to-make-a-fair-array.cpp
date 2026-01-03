class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        vector<int> po(n),pe(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(i==0){
                    pe[0] = nums[0];
                    po[0] = 0;
                }
                else{
                    pe[i] = pe[i-1] + nums[i];
                    po[i] = po[i-1];
                }
            }
            else{
                po[i] = po[i-1] + nums[i];
                pe[i] = pe[i-1];
            }
        }
        int cnt = 0;
        if((po[n-1]-po[0])==(pe[n-1]-pe[0])) cnt++;
        for(int i=1;i<n;i++){
            int a  = pe[i-1]  + po[n-1] -po[i];
            int b = po[i-1] + pe[n-1] -pe[i];
            if(a==b){
                cnt++;
            }
        }
        return cnt;
    }
};