class Solution {
public:
    int findNonMinOrMax(vector<int>& a) {
        sort(a.begin(),a.end());
        int len=a.size();
        if(len>2){
            return a[1];
        }
        else return -1;
    }
};