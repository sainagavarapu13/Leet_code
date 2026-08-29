class Solution {
public:
    int maxAdjacentDistance(vector<int>& a) {
        int maxi=0;
        for(int i=0;i<a.size()-1;i++){
            maxi=max(maxi,abs(a[i]-a[i+1]));
        }
        maxi=max(maxi,abs(a[0]-a.back()));
        return maxi;
    }
};