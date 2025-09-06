class Solution {
public:
    int minMaxDifference(int a) {
        string ans=to_string(a);
        int i=0;
        string ans2=to_string(a);
         char num1=ans2[i];
         for(int j=0;j<ans2.size();j++){
            if(ans2[j]==num1){
                ans2[j]='0';
            }
        }
        int mini=stoi(ans2);
        cout<<mini;
        while(i<ans.size()&&ans[i]=='9') i++;
        char num=ans[i];
        for(int j=i;j<ans.size();j++){
            if(ans[j]==num){
                ans[j]='9';
            }
        }
        int maxi=stoi(ans);
        return abs(mini-maxi);
    }
};