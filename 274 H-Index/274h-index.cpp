class Solution {
public:
    int hIndex(vector<int>& a) {
        sort(a.begin(),a.end(),greater<>());
        int i,cnt=0;
        for(i=0;i<a.size();i++){
            if((i+1)<=a[i]){
                cout<<a[i];
                cnt=i+1;
               // break;
            }
            else break;
        }
        return cnt;
    }
};