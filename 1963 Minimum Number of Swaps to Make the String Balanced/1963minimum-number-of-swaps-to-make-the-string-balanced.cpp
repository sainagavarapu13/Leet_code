class Solution {
public:
    int minSwaps(string s) {
        int cnt=0;
        int start =0,end=s.size()-1;
        int i=0,ans=0;
       for(int i=0;i<s.size();i++){
            if(s[i]=='[') cnt++;
            else cnt--;
            if(cnt<0){
                while(end>=0&&s[end]==']') end--;
                cnt=1;
                swap(s[i],s[end]);
            ans++;
            }
            
        }
        return ans;
    }
};