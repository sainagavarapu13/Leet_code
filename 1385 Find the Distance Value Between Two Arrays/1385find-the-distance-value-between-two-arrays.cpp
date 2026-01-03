class Solution {
public:
    int findTheDistanceValue(vector<int>& a, vector<int>&  b, int d) {
        sort(b.begin(),b.end());
        int cnt = 0;
        for(int i=0;i<a.size();i++){
            int f=1;
            for(int j=0;j<b.size();j++){
                if((abs(a[i]-b[j]))<=d){
                    f=0;
                    break;
                }
            } if(f==1) cnt++;
        }
        return cnt;
    }
};