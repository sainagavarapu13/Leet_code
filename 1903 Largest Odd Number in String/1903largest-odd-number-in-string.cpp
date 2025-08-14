class Solution {
public:
    string largestOddNumber(string a) {
        int idx1,idx2,i;
        for(i=0;i<a.size();i++){
            if((a[i]-'0')%2!=0){
                idx1=i;
                break;
            }
        }
         for(i=a.size()-1;i>=0;i--){
            if((a[i]-'0')%2!=0){
                idx2=i;
                break;
            }
        }
        string ans;
        for(i=0;i<=idx2;i++){
            ans.push_back(a[i]);
        }
        return ans;
    }
};