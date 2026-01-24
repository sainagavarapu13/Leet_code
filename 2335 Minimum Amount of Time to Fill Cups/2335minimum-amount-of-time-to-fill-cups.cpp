class Solution {
public:
    int fillCups(vector<int>& a) {
        sort(a.begin(),a.end(),greater<>());
        int cnt=0;
        while(true){
            if(a[0]!=0){
            a[0]--;
            a[1]--;}
            else{
                return cnt;
            }
            sort(a.begin(),a.end(),greater<>());
            cnt++;
        }
        return cnt;
    }
};