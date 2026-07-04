class Solution {
public:
    bool isMiddleElementUnique(vector<int>& a) {
        int n=a.size();
        int mid = n/2;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==a[mid]) cnt++;
        }
        return cnt==1;
    }
};