class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& a, int k) {
        int i,j;
        vector<vector<int>>ans;
        vector<int>in;
        sort(a.begin(),a.end());
        for(i=0;i<a.size();i+=3){
            for(j=i;j<i+3;j++){
                if(j==i){
                    in.push_back(a[j]);
                }
                else{
                    if(a[j]-a[i]<=k){
                        in.push_back(a[j]);
                    }
                    else{
                        ans.clear();
                        return ans;
                    }
                }
            }
            ans.push_back(in);
            in.clear();
        }
        return ans;
    }
};