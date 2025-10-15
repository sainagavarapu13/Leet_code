class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        int len=1;
        while(len<k){
            for(int i=0;i<len;i++){
                ans.push_back(ans[i]+1);
            }
           
            len=ans.size();
        }
        return ans[k-1];
    }
};