class Solution {
public:
    int largestAltitude(vector<int>& a) {
        int maxi=0;
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};