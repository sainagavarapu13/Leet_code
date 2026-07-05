class Solution {
public:
    bool isMiddleElementUnique(vector<int>& a) {
        map<int, int>m;
        for( int i : a) m[i]++;
        int mid = a.size()/2;
        //mid++;
        return m[a[mid]]==1;
    }
};