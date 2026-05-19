class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int n = arr.size();
        int sum =0;
        int maxsum =0;
        int count = 0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        maxsum = sum/k;
        if(maxsum>=t) count++;
        for(int i=k;i<n;i++){
            sum+=arr[i];
            sum-=arr[i-k];
        maxsum = sum/k;
        if(maxsum>=t){
            count++;
        }
        }
        return count;
    }
};