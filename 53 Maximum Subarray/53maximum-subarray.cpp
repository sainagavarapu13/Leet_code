class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int m=INT_MIN;
        int i,sum=0;
        for(i=0;i<a.size();i++){
           
            sum+=a[i];

            m=max(m,sum);
            if(sum<0) sum=0;
        }
        return m;

    }
};