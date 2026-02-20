class Solution {
public:
    long long countSubarrays(vector<int>& a, int k) {
        int maxi = *max_element(a.begin(),a.end());
        int freq=0;
        long long cnt=0;
        int start =0,end=0;
        while(end<a.size()){
            if(a[end]==maxi){
                freq++;
            }
            while(freq>=k){
                 if(a[start]==maxi){
                    freq--;
                 }
                 start++;
            }
            cnt+=start;
            end++;
        }
        return cnt;
    }
};