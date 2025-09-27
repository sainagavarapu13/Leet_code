class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& a, vector<vector<int>>& b) {
        int sum=0,i;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==0){
                sum+=a[i];
            }
        }
        vector<int>ans;
        for(i=0;i<b.size();i++){
            int ele=a[b[i][1]];
            int to_add = b[i][0];
           if(ele%2==0)  sum=sum-ele;
            if((to_add+ele)%2==0){
                sum+=ele+to_add;
            }
            ans.push_back(sum);
            a[b[i][1]]+=b[i][0];
        }
        return ans;
    }
};