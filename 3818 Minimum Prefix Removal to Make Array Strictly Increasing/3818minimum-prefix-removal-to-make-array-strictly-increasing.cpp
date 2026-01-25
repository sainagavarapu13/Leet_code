class Solution {
public:
    int minimumPrefixLength(vector<int>& a) {
        int i=a.size()-1;
        while(i>0&&a[i]>a[i-1]){
            i--;
        }
        return i;
    }
};