class Solution {
public:
    bool scoreBalance(string s) {
        int sum=0;
        int i;
        for(i=0;i<s.size();i++){
            sum+=(s[i]-'a'+1);
        }
        //cout<<sum;
        int cnt=0;
        for(i=0;i<s.size();i++){

            cnt+=(s[i]-'a'+1);
            if(cnt==sum-cnt) return 1;
        }
        return 0;
    }
};