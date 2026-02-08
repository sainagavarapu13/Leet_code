class Solution {
public:
    int dominantIndices(vector<int>& a) {
        int sum =0,n=(int)a.size();
        int cnt = 0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
        }
        for(int i=0;i<a.size();i++){
            sum-=a[i];
            n--;
            if(n!=0&&a[i] > (sum/n)){
                cnt++;
            }
        }
        return cnt;
    }
};