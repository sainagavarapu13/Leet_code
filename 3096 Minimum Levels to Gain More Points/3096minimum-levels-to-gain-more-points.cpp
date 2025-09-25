class Solution {
public:
    int minimumLevels(vector<int>& a) {
        int m=-1;
        int sum1=0,sum2=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==0) a[i]=-1;
            sum1+=a[i];
        }
        int cnt=0;
        for(int i=0;i<a.size();i++){
            sum2+=a[i];
            sum1-=a[i];
            if(i==a.size()-1&&sum1==0) return m;
            cnt++;
            if(sum2>sum1){
                return cnt;
            }
        }
        return m;
    }
};