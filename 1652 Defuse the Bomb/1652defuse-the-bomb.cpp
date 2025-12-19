class Solution {
public:
    vector<int> decrypt(vector<int>& a, int k) {
        if(k==0){
            vector<int>ans(a.size(),0);
            return ans;
        }
        vector<int>ans;
        int n=a.size();
        for(int i=0;i<a.size();i++){
            int sum=0;
            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    sum += a[(i + j) % n];
                }
            } else {
                for (int j = 1; j <= -k; j++) {
                    sum += a[(i - j + n) % n];
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};