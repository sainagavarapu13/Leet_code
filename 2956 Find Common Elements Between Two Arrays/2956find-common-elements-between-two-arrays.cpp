class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        int cnt=0,i;
        for( i=0;i<a.size();i++){
            if(count(b.begin(),b.end(),a[i])){
                cnt++;
            }
        }
        ans.push_back(cnt);
        cnt=0;
        for(i=0;i<b.size();i++){
            if(count(a.begin(),a.end(),b[i])){
                cnt++;
            }
        }
        ans.push_back(cnt);
        return ans;
    }
};