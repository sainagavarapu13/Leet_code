class Solution {
public:
    int countCompleteSubarrays(vector<int>& a) {
        set<int>s = { a.begin(),a.end()};
        int size = s.size();
        int cnt=0;
       for( int i=0;i<a.size();i++){
        set<int>tem;
        for( int j =i;j<a.size();j++){
            tem.insert(a[j]);
            if(tem.size()==size) cnt++;
        }
       }
        return cnt;
    }
};