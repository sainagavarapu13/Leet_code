class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& a) {
        vector<long long>b;
        for( int i=0;i<a.size();i++){
            b.push_back(a[i]);
            while( b.size()>=2 && b[b.size()-1]==b[b.size()-2]){
                long long sum = b.back();
                b.pop_back();
                b.back()+=sum;
                
            }
        }
        return b;
    }
};