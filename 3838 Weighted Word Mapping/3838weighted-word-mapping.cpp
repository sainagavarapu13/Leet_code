class Solution {
public:
    string mapWordWeights(vector<string>& a, vector<int>& b) {
        string sum;
        for(int i=0;i<a.size();i++){
            int cnt=0;
            for(int j=0;j<a[i].size();j++){
                cnt+=(b[a[i][j]-'a']);
            }
            sum.push_back(25 - (cnt%26) + 'a');
        }
       // for(auto& i:sum) cout<<i<<" ";
        return sum;
    }
};