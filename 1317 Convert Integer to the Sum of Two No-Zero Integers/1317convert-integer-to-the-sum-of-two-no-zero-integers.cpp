class Solution {
public:
    int zero(int n){
        while(n){
            if(n%10==0){
                return 0;
            }
            n=n/10;
        }
        return 1;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        n=n-1;
        int k=1;
        while(!zero(n)||!zero(k)){
            k++;
            n--;
        }
        ans.push_back(k);
        ans.push_back(n);
        return ans;
    }
};