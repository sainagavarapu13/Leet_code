class Solution {
public:
    string smallestNumber(string a) {
        int n=a.size();
        string ans;
       
        int k=2;
         for (int i = 1; i <= n + 1; i++)
            ans += char('0' + i);
       
        int len=n-1,idx,i=n-1;

        while(i>=0){
           
            if(a[i]=='D'){
                idx=i;
                while(i>=0&&a[i]=='D'){
                    i--;
                }
                reverse(ans.begin()+i+1,ans.begin()+idx+2);
                
            }
           ;
            i--;
        }
        return ans;
    }
};