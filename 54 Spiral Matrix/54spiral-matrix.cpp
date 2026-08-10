class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        int top=0,left=0,right=m-1,bottom=n-1;
        vector<int>ans;
        while(top<=bottom&&left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(a[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(a[i][right]);
            }
            right--;
            if(top<=bottom){
                 for(int i=right;i>=left;i--){
                ans.push_back(a[bottom][i]);
            }
            bottom--;
            }
           
            if(right>=left){
            for(int i=bottom;i>=top;i--){
                ans.push_back(a[i][left]);
            }
            left++;
            }
        }
        return ans;
    }
};