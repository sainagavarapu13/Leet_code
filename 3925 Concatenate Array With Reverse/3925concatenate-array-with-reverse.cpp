class Solution {
public:
    vector<int> concatWithReverse(vector<int>& a) {
        int n=a.size()-1;
        while(n>=0){
            a.push_back(a[n]);
            n--;
        }
        return a;
    }
};