class Solution {
public:
    long long maxAlternatingSum(vector<int>& a) {
        
        int n=a.size();
        int k = (n/2)+(n%2);
        long long sum=0;
        for(int i=0;i<n;i++){
            a[i]=a[i]*a[i];
        }
        sort(a.begin(),a.end(),greater<>());
        for(int i=0;i<k;i++){
            sum+=(a[i]);
        }
        for(int i=k;i<n;i++){
            sum=sum-a[i];
        }
        return sum;
    }
};