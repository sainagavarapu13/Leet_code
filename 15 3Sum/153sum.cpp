class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(),a.end());
        set<vector<int>>ans;
        vector<int>temp;
        for(int i=0;i<a.size();i++){
            int start =i+1;
            int end = a.size()-1;
            int sum = 0;
            while(start<end){
                sum=a[i]+a[start]+a[end];
                if(sum == 0){
                    ans.insert({a[i],a[start],a[end]});
                    start++;
                    end--;
                }
                else if( sum >0){
                    end--;
                }
                else start++;
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};