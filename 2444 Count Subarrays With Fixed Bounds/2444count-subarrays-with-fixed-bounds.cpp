class Solution {
public:
    long long countSubarrays(vector<int>& a, int mi, int ma) {
        long long start = -1;
        long long mini = -1, maxi = -1;
        long long ans = 0;

        for(int i = 0; i < a.size(); i++) {

            if(a[i] < mi || a[i] > ma)
                start = i;  

            if(a[i] == mi)
                mini = i;

            if(a[i] == ma)
                maxi = i;
            ans += max(0LL, min(mini, maxi) - start);
        }
        return ans;
    }
};