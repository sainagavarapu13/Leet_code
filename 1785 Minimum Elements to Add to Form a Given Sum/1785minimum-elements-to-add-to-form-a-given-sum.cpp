class Solution {
public:
    int minElements(vector<int>& a, int limit, int goal) {
        long long sum=0;
        for(int i=0;i<a.size();i++){
            sum+=(long long)a[i];
        }
        int ans=0;
        if(sum==goal) return 0;
        long long rem=abs((long long)goal-sum);
        return (rem+limit-1)/limit;
    }
};