class Solution {
public:
    int minOperations(string s1, string s2) {
        int ans=0;
        int i;
        int n=s1.size();
        if(n==1&&s1=="0"&&s2=="1") return 1;
        if(s1==s2) return 0;
        if(n==1) return -1;
        for( i=0;i<s1.size()-1;i++){
            if(s1[i]==s2[i]) continue;
            else if(s1[i]=='0'&&s2[i]=='1'){
                ans++;
                s1[i]='1';
            }
            else if(s1[i]=='1'&&s2[i]=='0'){
                if(s1[i+1]=='1'){
                    ans++;
                }
                else{
                    ans+=2;
                }
                s1[i]='0';
                s1[i+1]='0';
            }

        }
          if(s1[i]!=s2[i]){
            if(s1[i]=='0'&&s2[i]=='1') {ans++;
            s1[i]='1';}
            else {ans+=2;
            s1[i]='0';
            }
           }
           
        if(s1!=s2) return -1;
        return ans;
    }
};