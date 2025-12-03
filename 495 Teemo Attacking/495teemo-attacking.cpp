class Solution {
public:
    int findPoisonedDuration(vector<int>& a, int k) {
        int sum=0;
        int n=a.size();
        for(int i=0;i<a.size();i++){
            if(i!=n-1&&a[i]+k-1>=a[i+1]){
                sum+=a[i+1]-a[i];
            }
            else{
                sum+=k;
            }
        }
        return sum;
    }
};