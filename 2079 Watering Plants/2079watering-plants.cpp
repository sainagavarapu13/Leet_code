class Solution {
public:
    int wateringPlants(vector<int>& pl, int ca) {
        int res = 0,n=pl.size(),w = ca,p=-1;
        for(int i=0;i<n;i++){
            if(w>=pl[i]){
                res += (i-p);
                w -=pl[i];
                p = i;
            }
            else{
                res += 2*(i+1);
                p=i+1;
                w = ca;
                i--;
            }
           // cout<<res<<" "<<w<<" "<<p<<" "<<i<<" "<<pl[i]<<endl;
        }
        return res;
    }
};