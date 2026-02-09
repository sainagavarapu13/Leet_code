class Solution {
public:
    int jump(vector<int>& a) {
        int k=0;
        vector<int>temp(a.size(),INT_MAX);
        temp[0] = 0;
        int mini=INT_MAX;
        for(int i=1;i<a.size();i++){
            mini=INT_MAX;
            for(int j=i-1;j>=0;j--){
               if(j+a[j]>=i) mini=min(mini,temp[j]);
            }
            temp[i] = mini+1;
        }
        return temp.back();
    }
};