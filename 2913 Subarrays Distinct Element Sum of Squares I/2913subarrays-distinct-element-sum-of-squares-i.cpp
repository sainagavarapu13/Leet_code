class Solution {
public:
    int sumCounts(vector<int>& a) {
        int sum=0;
        for(int i=0;i<a.size();i++){
            set<int>s;
            for(int j=i;j<a.size();j++){
                s.insert(a[j]);
                sum+=(s.size()*s.size());
            }
        }
        return sum;
    }
};