class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0,n = nums.size();
        for(int i=0;i<n;i++){
            int a = 0,b = 0;
            for(int j=1;j*j<=nums[i];j++){
                if(nums[i]%j==0){
                    a++;
                    b += j;
                    int c = nums[i]/j;
                    if(j!=c){
                        b += c;
                        a++;
                    }
                }
                if(a>4){
                    break;
                }
            }
            if(a==4){
                sum += b;
            }
        }
        return sum;
    }
};