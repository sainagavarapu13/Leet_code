class Solution {
public:
    int countRatioSubarrays(vector<int>& a, int n, int m) {
        int ans=0,x=0,y=0;
        for(int i=0;i<a.size();i++){
            x=0,y=0;
            for(int j=i;j<a.size();j++){
                if(a[j]%2==0) x++;
                else y++;
                if(y>0){
                    if(x*m<=y*n){
                        //cout<<i<<" "<<j<<"\n";
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};