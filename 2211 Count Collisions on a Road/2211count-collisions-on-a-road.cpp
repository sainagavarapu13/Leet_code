class Solution {
public:
    int countCollisions(string a) {
        int n=a.size();
        int i=0,end=n-1;
        while(i<n&&a[i]=='L'){
            i++;
        }
        while(end>=0&&a[end]=='R'){
            end--;
        }
        int cnt=0;
        for(int j=i;j<=end;j++){
            if(a[j]!='S'){
                cnt++;
            }
        }
        return cnt;
    }
};