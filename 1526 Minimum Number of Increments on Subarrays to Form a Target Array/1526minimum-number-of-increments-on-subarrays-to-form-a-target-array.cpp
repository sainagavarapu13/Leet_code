class Solution {
public:
    int minNumberOperations(vector<int>& a) {
        int i,sum=a[0];
        for(i=1;i<a.size();i++){
            if(a[i]>a[i-1]){
                sum+=(a[i]-a[i-1]);
            }
        }
        return sum;
    }
};