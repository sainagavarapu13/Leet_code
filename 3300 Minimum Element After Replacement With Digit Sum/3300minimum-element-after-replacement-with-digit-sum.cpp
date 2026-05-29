class Solution {
public:
    int minElement(vector<int>& a) {
        int mini=INT_MAX;
        for(int i=0;i<a.size();i++){
            int sum=0;
            int k=a[i];
            while(k!=0){
                sum+=(k%10);
                k/=10;
            }
            mini=min(mini,sum);
        }
        return mini;
    }
};