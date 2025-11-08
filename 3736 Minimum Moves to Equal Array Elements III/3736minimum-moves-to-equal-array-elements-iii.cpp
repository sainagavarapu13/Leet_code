class Solution {
public:
    int minMoves(vector<int>& a) {
        int m=-1;
        for(int i=0;i<a.size();i++){
            m=max(m,a[i]);
        }
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum+=abs(a[i]-m);
        }
        return sum;
    }
};