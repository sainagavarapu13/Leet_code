class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int  sum = 0,n = arr.size();
        vector<int> p(n+1,0);
        for(int i=0;i<n;i++){
            p[i+1] = p[i]+arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=1;i+j<=n;j+=2){
                sum += p[j+i]-p[i];
            }
        }
        return sum;
    }
};