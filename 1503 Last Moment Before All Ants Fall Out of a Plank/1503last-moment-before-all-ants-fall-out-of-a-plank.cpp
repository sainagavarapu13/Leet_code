class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int a = 0;
        for(int i=0;i<left.size();i++){
            a = max(a,left[i]);
        }
        for(int j=0;j<right.size();j++){
            a = max(a,n-right[j]);
        }
        return a;
    }
};