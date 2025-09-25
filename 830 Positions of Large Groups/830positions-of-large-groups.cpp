class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> m;
        int i=0,n=s.length();
        while(i<n){
            int j = i;
            while(j<n && s[i]==s[j]){
                j++;
            }
            if((j-i)>=3){
                m.push_back({i,j-1});
            }
            i=j;
        }
        return m;
    }
};