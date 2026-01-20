class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& a) {
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            int f=0;
            for(int j=1;j<a[i];j++){
                if((j|j+1)==a[i]){
                    ans.push_back(j);
                    f=1;
                    break;
                }
            }
            if(f==0) ans.push_back(-1);
        }
        return ans;
    }
};