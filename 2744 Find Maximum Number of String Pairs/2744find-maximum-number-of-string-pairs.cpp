class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& a) {
        int cnt=0;
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                reverse(a[j].begin(),a[j].end());
                if(a[i]==a[j]) cnt++;
            }
        }
        return cnt;
    }
};