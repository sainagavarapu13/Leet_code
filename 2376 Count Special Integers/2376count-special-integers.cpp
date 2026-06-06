class Solution {
public:
    int check(int idx,string &a, int tight,string &mask,int start){
        if(idx==a.size()){
           return start;
        }
        int lim;
        int ans=0;
        if(tight){
            lim=a[idx]-'0';
        }
        else lim = 9;
        for(int i=0;i<=lim;i++){
           
            int t = (tight&&i==(a[idx]-'0'));
            if(start==0&&i==0){
               ans+= check(idx+1,a,t,mask,0);
                continue;
            }
            if(mask[i]=='1') continue;
            mask[i]='1';
           ans+= check(idx+1,a,t,mask,1);
           mask[i]='0';
        }
        return ans;
    }
    int countSpecialNumbers(int n) {
        string a = to_string(n);
        string mask="0000000000";
        return check(0,a,1,mask,0);
    }
};