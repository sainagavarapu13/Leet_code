class Solution {
public:
    int numOfPairs(vector<string>& a, string t) {
        int cnt=0;
        for( int i=0;i<a.size();i++){
            for( int j =0;j<a.size();j++){
                
                if(i!=j && a[i]+a[j]==t) cnt++;
                
            }
        }
        return cnt;
    }
};