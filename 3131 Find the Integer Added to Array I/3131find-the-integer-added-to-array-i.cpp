class Solution {
public:
    int addedInteger(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i,sum=0;
        while(i<a.size()){
            sum+=(b[i]-a[i]);
            i++;
        }
        return sum;
    }
};