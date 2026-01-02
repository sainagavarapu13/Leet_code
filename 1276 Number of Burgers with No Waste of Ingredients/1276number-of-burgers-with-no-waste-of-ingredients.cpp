class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        if(t%2==1 || t<2*c || t>4*c) return {};
        else return {(t-2*c)/2,(4*c-t)/2};
    }
};