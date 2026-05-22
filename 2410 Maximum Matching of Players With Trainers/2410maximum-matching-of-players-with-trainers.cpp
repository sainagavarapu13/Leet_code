class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0;
        int cnt=0;
        while(i<a.size()&&j<b.size()){
            while(j<b.size()&&a[i]>b[j]){
                j++;
            }
            if(j<b.size()&&a[i]<=b[j])
            cnt++;
            j++;
            i++;
        }
        return cnt;
    }
};